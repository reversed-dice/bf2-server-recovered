// FUNCTION: BF2 0x8385b0
typedef int GPResult;
typedef int GPEnum;
typedef int GPIBool;
typedef struct _GPConnection * GPConnection;

#define GP_NO_ERROR        0
#define GPI_BM_FILE_END    203
#define GPI_FILE_DIRECTORY 2

struct GPITransferID
{
	int profileid;
	unsigned int count;
	unsigned int time;
};

struct GPIPeer;

struct GPITransfer
{
	char pad0[0x10];
	struct GPITransferID transferID;
	char pad1[0xc];
	struct GPIPeer * peer;
	int currentFile;
};

struct MD5Context
{
	unsigned int state[4];
	unsigned int count[2];
	unsigned char buffer[64];
};

struct GPIFile
{
	char pad0[0x28];
	int flags;
	char pad1[0x4];
	struct MD5Context md5;
};

extern "C" GPResult gpiPeerStartTransferMessage(GPConnection * connection, struct GPIPeer * peer, int type, struct GPITransferID * transferID);
extern "C" GPResult gpiSendOrBufferStringLen(GPConnection * connection, struct GPIPeer * peer, const char * str, int len);
extern "C" GPResult gpiSendOrBufferInt(GPConnection * connection, struct GPIPeer * peer, int value);
extern "C" GPResult gpiSendOrBufferString(GPConnection * connection, struct GPIPeer * peer, const char * str);
extern "C" GPResult gpiFinishTransferMessage(GPConnection * connection, struct GPITransfer * transfer, const char * str, int len);
extern "C" void MD5Final(unsigned char * digest, struct MD5Context * context);
extern "C" void MD5Print(unsigned char * digest, char * out);

#define CHECK_RESULT(result)                { GPResult __result__ = (result); if(__result__ != GP_NO_ERROR) { return __result__; } }

extern "C" GPResult gpiSendFileEnd(GPConnection * connection, struct GPITransfer * transfer, struct GPIFile * file)
{
	CHECK_RESULT(gpiPeerStartTransferMessage(connection, transfer->peer, GPI_BM_FILE_END, (struct GPITransferID *)&transfer->transferID));

	// Add the file index.
	//////////////////////
	gpiSendOrBufferStringLen(connection, transfer->peer, "\\file\\", 6);
	gpiSendOrBufferInt(connection, transfer->peer, transfer->currentFile);

	// Only add the MD5 for files.
	//////////////////////////////
	if(!(file->flags & GPI_FILE_DIRECTORY))
	{
		unsigned char md5Raw[16];
		char md5[33];

		// Get the MD5.
		///////////////
		MD5Final(md5Raw, &file->md5);
		MD5Print(md5Raw, md5);

		// Add it.
		//////////
		gpiSendOrBufferString(connection, transfer->peer, "\\md5\\");
		gpiSendOrBufferString(connection, transfer->peer, md5);
	}

	gpiFinishTransferMessage(connection, transfer, 0, 0);

	return GP_NO_ERROR;
}
