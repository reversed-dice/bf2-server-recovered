// FUNCTION: BF2 0x838100
typedef int GPIBool;
typedef int GPResult;
typedef int GPProfile;

struct _GPConnection;
typedef struct _GPConnection * GPConnection;

struct GPITransferID
{
	int profileid;
	int count;
	unsigned int time;
};

struct GPITransfer
{
	int state;
	char pad0[0xc];
	GPITransferID transferID;
	int localID;
	char pad1[0x20];
	unsigned long lastSend;
};

struct GPIConnection
{
	char pad0[0x1a0];
	int profileid;
};

extern "C" {
GPResult gpiNewTransfer(GPConnection * connection, GPITransfer ** transfer, GPProfile profile, int sender);
unsigned int current_time(...);
}

GPResult gpiNewSenderTransfer(GPConnection * connection, GPITransfer ** transfer, GPProfile profile)
{
	GPITransfer * pTransfer;
	GPIConnection * iconnection = (GPIConnection *)*connection;
	unsigned long now;
	GPResult result;

	result = gpiNewTransfer(connection, transfer, profile, 1);
	if(result != 0)
		return result;

	now = current_time();

	pTransfer = *transfer;
	pTransfer->transferID.profileid = iconnection->profileid;
	pTransfer->transferID.count = pTransfer->localID;
	pTransfer->state = 0;
	pTransfer->transferID.time = (unsigned int)now;
	pTransfer->lastSend = now;

	return 0;
}
