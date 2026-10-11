// FUNCTION: BF2 0x82bf50
typedef int GPResult;
typedef int GPEnum;
typedef int GPProfile;
typedef int GPTransfer;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPITransfer
{
	char pad0[0x34];
	int throttle;
};
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" GPITransfer * gpiFindTransferByLocalID(GPConnection * connection, GPTransfer transfer);

GPResult gpGetTransferThrottle(GPConnection * connection, GPTransfer transfer, int * throttle)
{
	struct GPITransfer * pTransfer;

	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if (!pTransfer)
	{
		gpiSetErrorString(connection, "Invalid transfer.");
		return 2;
	}

	*throttle = pTransfer->throttle;

	return 0;
}
