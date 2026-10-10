// FUNCTION: BF2 0x82ba90
// upstream GameSpy/GP/gp.c gpRejectTransferA
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;
typedef void * GPConnection;
typedef void (* GPCallback)( GPConnection * connection, void * arg, void * param );
typedef enum _GPIBool { GPIFalse, GPITrue } GPIBool;
typedef struct { char * buffer; int size; int len; int pos; } GPIBuffer;
typedef enum { GPI_PEER_OP_STATE_NONE, GPI_PEER_OP_STATE_REQUESTED, GPI_PEER_OP_STATE_FINISHED } GPIPeerOpState;
typedef unsigned int gsi_time;
typedef struct _GPIPeerOp { GPIPeerOpState state; void *userData; GPCallback callback; struct _GPIPeerOp * next; int type; gsi_time timeout; } GPIPeerOp;
typedef struct _GPIPeerOpQueue { GPIPeerOp * opList; GPIPeerOp * first; GPIPeerOp * last; } GPIPeerOpQueue;
typedef int GPProfile;
typedef struct GPIPeer_s { int state; GPIBool initiated; unsigned int ip; unsigned short port; GPProfile profile; time_t timeout; int nackCount; GPIBuffer inputBuffer; GPIBuffer outputBuffer; DArray messages; GPIPeerOpQueue peerOpQueue; struct GPIPeer_s * pnext; } GPIPeer;
typedef struct GPITransferID_s { int profileid; unsigned int count; unsigned int time; } GPITransferID;
typedef enum { GPITransferPinging, GPITransferWaiting, GPITransferTransferring, GPITransferComplete, GPITransferCancelled, GPITransferNoConnection } GPITransferState;
typedef struct { GPITransferState state; DArray files; GPITransferID transferID; int localID; GPIBool sender; GPProfile profile; GPIPeer * peer; int currentFile; int throttle; char * baseDirectory; unsigned long lastSend; char * message; int totalSize; int progress; void * userData; } GPITransfer;
#define GPI_REJECTED 1
typedef enum _GPResult { GP_NO_ERROR, GP_MEMORY_ERROR, GP_PARAMETER_ERROR, GP_NETWORK_ERROR, GP_SERVER_ERROR, GP_MISC_ERROR, GP_COUNT } GPResult;
typedef int GPTransfer;
extern "C" {
GPITransfer * gpiFindTransferByLocalID(GPConnection * connection, int localID);
void gpiFreeTransfer(GPConnection * connection, GPITransfer * transfer);
GPResult gpiSendTransferReply(GPConnection * connection, const GPITransferID * transferID, GPIPeer * peer, int result, const char * msg);
}

GPResult gpRejectTransferA(
  GPConnection * connection,
  GPTransfer transfer,
  const char * message
)
{
	GPITransfer * pTransfer;

	// Get the transfer.
	////////////////////
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		return GP_NO_ERROR;

	// Check if this transfer has been cancelled.
	/////////////////////////////////////////////
	if(pTransfer->state & GPITransferCancelled)
		return GP_NO_ERROR;

	// Send the reply.
	//////////////////
	gpiSendTransferReply(connection, &pTransfer->transferID, pTransfer->peer, GPI_REJECTED, message);

	// Free the transfer.
	/////////////////////
	gpiFreeTransfer(connection, pTransfer);

	return GP_NO_ERROR;
}
