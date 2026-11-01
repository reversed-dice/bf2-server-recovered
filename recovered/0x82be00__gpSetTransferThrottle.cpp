// FUNCTION: BF2 0x82be00
typedef int GPResult;
typedef int GPEnum;
typedef int GPIBool;
typedef int GPTransfer;
typedef struct _GPConnection * GPConnection;
typedef void * GPCallback;

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
	int localID;
	GPIBool sender;
	char pad1[0x4];
	struct GPIPeer * peer;
	char pad2[0x4];
	int throttle;
};

struct GPTransferCallbackArg
{
	int transfer;
	int type;
	char pad0[0x4];
	int num;
	char pad1[0x8];
};

struct GPICallback_s
{
	volatile GPCallback callback;
	void * param;
};

struct GPIConnection
{
	char pad0[0x208];
	struct GPICallback_s callbacks[1];
};

#define GP_NO_ERROR        0
#define GP_PARAMETER_ERROR 2
#define GPI_BM_FILE_TRANSFER_THROTTLE 206
#define GP_TRANSFER_THROTTLE 0x809
#define GPI_TRANSFER_CALLBACK 0
#define GPI_ADD_TRANSFER_CALLBACK 7

extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" struct GPITransfer * gpiFindTransferByLocalID(GPConnection * connection, int localID);
extern "C" GPResult gpiPeerStartTransferMessage(GPConnection * connection, struct GPIPeer * peer, int type, struct GPITransferID * transferID);
extern "C" GPResult gpiSendOrBufferString(GPConnection * connection, struct GPIPeer * peer, const char * str);
extern "C" GPResult gpiSendOrBufferInt(GPConnection * connection, struct GPIPeer * peer, int value);
extern "C" GPResult gpiPeerFinishTransferMessage(GPConnection * connection, struct GPIPeer * peer, const char * str, int len);
extern "C" void * gsimalloc(unsigned long size);
extern "C" void * memset(void * dest, int c, unsigned long n);
extern "C" GPResult gpiAddCallback(GPConnection * connection, GPCallback callback, void * param, void * arg, void * operation, int type);

#define Error(connection, result, string)   { gpiSetErrorString(connection, string); return (result); }
#define CHECK_RESULT(result)                { GPResult __result__ = (result); if(__result__ != GP_NO_ERROR) { return __result__; } }

extern "C" GPResult gpSetTransferThrottle(GPConnection * connection, GPTransfer transfer, int throttle)
{
	struct GPITransfer * pTransfer;
	struct GPIConnection * iconnection;

	// Error check.
	///////////////
	if((connection == 0) || (*connection == 0))
		return GP_PARAMETER_ERROR;

	// Get the connection object.
	/////////////////////////////
	iconnection = (struct GPIConnection*)*connection;

	// Negative means no throttle.
	//////////////////////////////
	if(throttle < 0)
		throttle = -1;

	// Get the transfer.
	////////////////////
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	// Store the throttle setting.
	//////////////////////////////
	pTransfer->throttle = throttle;

	// Send the rate.
	/////////////////
	CHECK_RESULT(gpiPeerStartTransferMessage(connection, pTransfer->peer, GPI_BM_FILE_TRANSFER_THROTTLE, (struct GPITransferID *)&pTransfer->transferID));
	gpiSendOrBufferString(connection, pTransfer->peer, "\\rate\\");
	gpiSendOrBufferInt(connection, pTransfer->peer, throttle);
	gpiPeerFinishTransferMessage(connection, pTransfer->peer, 0, 0);

	// If we're the sender, call the callback.
	//////////////////////////////////////////
	if(pTransfer->sender)
	{
		struct GPTransferCallbackArg * arg;

		// Call the callback.
		/////////////////////
		arg = (struct GPTransferCallbackArg *)gsimalloc(sizeof(struct GPTransferCallbackArg));
		if(arg)
		{
			memset(arg, 0, sizeof(struct GPTransferCallbackArg));
			arg->transfer = pTransfer->localID;
			arg->type = GP_TRANSFER_THROTTLE;
			arg->num = throttle;
			gpiAddCallback(connection, iconnection->callbacks[GPI_TRANSFER_CALLBACK].callback, iconnection->callbacks[GPI_TRANSFER_CALLBACK].param, arg, 0, GPI_ADD_TRANSFER_CALLBACK);
		}
	}

	return GP_NO_ERROR;
}
