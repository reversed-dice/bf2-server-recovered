// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x82bca0
typedef int GPResult;
typedef int GPEnum;
typedef int GPProfile;
typedef int GPTransfer;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPITransfer
{
	int state;
	char pad0[0x20 - 4];
	int sender;
	char pad1[0x38 - 0x24];
	char * baseDirectory;
};
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" GPITransfer * gpiFindTransferByLocalID(GPConnection * connection, GPTransfer transfer);
extern "C" void gsiFree(void * ptr);
extern "C" char * goastrdup(const char * str);
extern "C" unsigned long strlen(const char * str);

GPResult gpSetTransferDirectoryA(GPConnection * connection, GPTransfer transfer, const char * directory)
{
	struct GPITransfer * pTransfer;
	char lastChar;

	if (!directory || !directory[0])
	{
		gpiSetErrorString(connection, "Invalid directory.");
		return 2;
	}
	lastChar = directory[strlen(directory) - 1];
	if ((lastChar != '\\') && (lastChar != '/'))
	{
		gpiSetErrorString(connection, "Invalid directory.");
		return 2;
	}

	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if (!pTransfer)
	{
		gpiSetErrorString(connection, "Invalid transfer.");
		return 2;
	}

	if (pTransfer->sender)
	{
		gpiSetErrorString(connection, "Sender has no transfer directory.");
		return 2;
	}
	if (pTransfer->state != 1)
	{
		gpiSetErrorString(connection, "Can only set transfer directory before transferring.");
		return 2;
	}

	if (pTransfer->baseDirectory)
		gsiFree(pTransfer->baseDirectory);
	pTransfer->baseDirectory = 0;

	pTransfer->baseDirectory = goastrdup(directory);
	if (!pTransfer->baseDirectory)
	{
		gpiSetErrorString(connection, "Out of memory.");
		return 1;
	}

	return 0;
}
