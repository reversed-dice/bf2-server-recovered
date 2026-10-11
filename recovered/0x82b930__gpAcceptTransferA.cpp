// FUNCTION: BF2 0x82b930
// BF2 0x82b930 gpAcceptTransferA
typedef int GPResult;
typedef void* GPTransfer;

struct GPITransferID { int profileid; unsigned int count; unsigned int time; };

struct GPITransfer {
    int state;
    int pad0;
    void* files;
    GPITransferID transferID;
    int localID;
    int sender;
    int profile;
    void* peer;
    int currentFile;
    int throttle;
    char* baseDirectory;
};

void* gpiFindTransferByLocalID(void* connection, GPTransfer transfer);
void gpiSetErrorString(void* connection, const char* string);
GPResult gpiSendTransferReply(void* connection, GPITransferID* transferID, void* peer, int type, const char* message);

enum { GP_NO_ERROR = 0, GP_MEMORY_ERROR = 1, GP_PARAMETER_ERROR = 2 };
enum { GPITransferPinging, GPITransferWaiting, GPITransferTransferring, GPITransferComplete, GPITransferCancelled, GPITransferNoConnection };
enum { GPI_ACCEPTED = 0, GPI_REJECTED = 1, GPI_NOT_ACCEPTING = 2 };

GPResult gpAcceptTransferA(void* connection, GPTransfer transfer, const char* message)
{
    GPITransfer* pTransfer;

    if ((connection == 0) || (*(void**)connection == 0))
        return GP_PARAMETER_ERROR;

    pTransfer = (GPITransfer*)gpiFindTransferByLocalID(connection, transfer);
    if (!pTransfer) {
        gpiSetErrorString(connection, "Invalid transfer.");
        return GP_PARAMETER_ERROR;
    }

    if (!pTransfer->baseDirectory) {
        gpiSetErrorString(connection, "No transfer directory set.");
        return GP_PARAMETER_ERROR;
    }

    if (pTransfer->state & GPITransferCancelled) {
        gpiSetErrorString(connection, "Transfer already cancelled.");
        return GP_PARAMETER_ERROR;
    }

    {
        GPResult __result__ = gpiSendTransferReply(connection, &pTransfer->transferID, pTransfer->peer, GPI_ACCEPTED, message);
        if (__result__ != GP_NO_ERROR)
            return __result__;
    }

    pTransfer->state = GPITransferTransferring;
    pTransfer->currentFile = 0;

    return GP_NO_ERROR;
}
