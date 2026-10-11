// FUNCTION: BF2 0x82bc20
typedef int GPResult;
typedef int GPEnum;
typedef int GPProfile;
typedef int GPTransfer;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPITransfer
{
	char pad0[0x58];
	void * userData;
};
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" GPITransfer * gpiFindTransferByLocalID(GPConnection * connection, GPTransfer transfer);

GPResult gpSetTransferData(GPConnection * connection, GPTransfer transfer, void * userData)
{
	struct GPITransfer * pTransfer;

	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if (!pTransfer)
	{
		gpiSetErrorString(connection, "Invalid transfer.");
		return 2;
	}

	pTransfer->userData = userData;

	return 0;
}
