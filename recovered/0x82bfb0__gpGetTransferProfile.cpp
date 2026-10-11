// FUNCTION: BF2 0x82bfb0
typedef int GPResult;
typedef int GPEnum;
typedef int GPProfile;
typedef int GPTransfer;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPITransfer
{
	char pad0[0x24];
	GPProfile profile;
};
extern "C" void gpiSetErrorString(GPConnection * connection, const char * errorString);
extern "C" GPITransfer * gpiFindTransferByLocalID(GPConnection * connection, GPTransfer transfer);

GPResult gpGetTransferProfile(GPConnection * connection, GPTransfer transfer, GPProfile * profile)
{
	struct GPITransfer * pTransfer;

	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if (!pTransfer)
	{
		gpiSetErrorString(connection, "Invalid transfer.");
		return 2;
	}

	*profile = pTransfer->profile;

	return 0;
}
