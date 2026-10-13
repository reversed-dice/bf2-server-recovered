// FUNCTION: BF2 0x82f8c0
typedef int GPResult;
typedef int GPEnum;
typedef int GPIBool;
typedef void* GPConnection;

struct GPIBuffer { char* buffer; int len; int pos; int size; };              // 0x18
struct GPSocketBuffer { char* buffer; int len; int size; int cap; char pad[4]; };  // 0x18
struct GPIPeer { char pad[0x58]; GPIPeer* pnext; };

struct GPIConnection
{
	char pad0[0x198];
	int sessKey;                     // 0x198
	int userid;                      // 0x19c
	int profileid;                   // 0x1a0
	char pad1[0x238 - 0x1a4];
	int cmSocket;                    // 0x238
	int connectState;                // 0x23c
	GPSocketBuffer socketBuffer;     // 0x240
	char pad2[0x258 - 0x258];
	void* inputBuffer;               // 0x258
	char pad3[0x268 - 0x260];
	GPIBuffer outputBuffer;          // 0x268
	int peerSocket;                  // 0x280
	char pad4[0x4a8 - 0x284];
	void* operationList;             // 0x4a8
	char pad5[0x4c0 - 0x4b0];
	void* peerList;                  // 0x4c0
	char pad6[0x4d8 - 0x4c8];
	GPSocketBuffer updateproBuffer;  // 0x4d8
	GPSocketBuffer updateuiBuffer;   // 0x4f0
};

#define GP_NO_ERROR (GPResult)0
#define GPITrue 1
#define GPIFalse 0
#define INVALID_SOCKET (-1)
#define GPI_NOT_CONNECTED 0
#define GPI_CONNECTED 3
#define GPI_DISCONNECTED 4

extern "C" void gsifree(void* mem);
extern "C" void gpiRemoveOperation(GPConnection* connection, void* operation);
extern "C" void gpiDestroyPeer(GPConnection* connection, GPIPeer* peer);
extern "C" GPResult gpiProfileMap(GPConnection* connection, GPIBool (*func)(GPConnection*, void*, void*), void* param);
extern "C" GPIBool gpiDisconnectCleanupProfile(GPConnection* connection, void* pProfile, void* param);
extern "C" GPResult gpiSendFromBuffer(GPConnection* connection, int sock, GPIBuffer* buffer, GPIBool* connClosed, GPIBool blocking, const char* prefix);
extern "C" GPResult gpiAppendStringToBuffer(GPConnection* connection, GPIBuffer* buffer, const char* string);
extern "C" GPResult gpiAppendIntToBuffer(GPConnection* connection, GPIBuffer* buffer, int value);
extern "C" int shutdown(int sock, int how);
extern "C" int close(int sock);

#define closesocket(s) close(s)
#define freeclear(mem) { gsifree(mem); (mem) = 0; }

void gpiDisconnect(GPConnection* connection, GPIBool tellServer)
{
	GPIConnection* iconnection = (GPIConnection*)*connection;
	GPIPeer* peer;
	GPIPeer* delPeer;
	GPIBool connClosed;

	// Check if we're already disconnected.
	if (iconnection->connectState == GPI_DISCONNECTED)
		return;

	// Skip most of this stuff if we never actually connected.
	if (iconnection->connectState != GPI_NOT_CONNECTED)
	{
		// Are we connected?
		if (tellServer && (iconnection->connectState == GPI_CONNECTED))
		{
			// Send the disconnect.
			gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\logout\\\\sesskey\\");
			gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
			gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");
		}

		// Always flush remaining messages.
		gpiSendFromBuffer(connection, iconnection->cmSocket, &iconnection->outputBuffer, &connClosed, GPITrue, "CM");

		// Cleanup the connection.
		if (iconnection->cmSocket != INVALID_SOCKET)
		{
			shutdown(iconnection->cmSocket, 2);
			closesocket(iconnection->cmSocket);
			iconnection->cmSocket = INVALID_SOCKET;
		}
		if (iconnection->peerSocket != INVALID_SOCKET)
		{
			shutdown(iconnection->peerSocket, 2);
			closesocket(iconnection->peerSocket);
			iconnection->peerSocket = INVALID_SOCKET;
		}

		// We're disconnected.
		iconnection->connectState = GPI_DISCONNECTED;

		// Don't keep the userid/profileid.
		iconnection->userid = 0;
		iconnection->profileid = 0;
	}

	// freeclear all the memory.
	freeclear(iconnection->socketBuffer.buffer);
	freeclear(iconnection->inputBuffer);
	freeclear(iconnection->outputBuffer.buffer);
	freeclear(iconnection->updateproBuffer.buffer);
	freeclear(iconnection->updateuiBuffer.buffer);
	while (iconnection->operationList != 0)
		gpiRemoveOperation(connection, iconnection->operationList);
	iconnection->operationList = 0;
	for (peer = (GPIPeer*)iconnection->peerList; peer != 0; )
	{
		delPeer = peer;
		peer = peer->pnext;
		gpiDestroyPeer(connection, delPeer);
	}
	iconnection->peerList = 0;

	// Cleanup profiles.
	while (!gpiProfileMap(connection, gpiDisconnectCleanupProfile, 0)) { };
}
