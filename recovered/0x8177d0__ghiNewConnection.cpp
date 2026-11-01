// from api 93.68%
// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x8177d0
typedef int GHTTPBool;

struct GHIEncryptor
{
	void * data;             // 0x00
	int pad08;               // 0x08
	int mInitialized;        // 0x0c
	char pad10[0x10];        // 0x10
	void * mCleanupFunc;     // 0x20
};

struct GHIConnection
{
	int inUse;                                 // 0x00
	int request;                               // 0x04
	int uniqueID;                              // 0x08
	int type;                                  // 0x0c
	int state;                                 // 0x10
	int pad14;                                 // 0x14
	char * URL;                                // 0x18
	char * serverAddress;                      // 0x20
	unsigned int serverIP;                     // 0x28
	unsigned short serverPort;                 // 0x2c
	char pad2e[2];                             // 0x2e
	char * requestPath;                        // 0x30
	int protocol;                              // 0x38
	int pad3c;                                 // 0x3c
	char * sendHeaders;                        // 0x40
	void * saveFile;                           // 0x48
	int blocking;                              // 0x50
	int persistConnection;                     // 0x54
	int result;                                // 0x58
	int pad5c;                                 // 0x5c
	void * progressCallback;                   // 0x60
	void * completedCallback;                  // 0x68
	void * callbackParam;                      // 0x70
	int socket;                                // 0x78
	int socketError;                           // 0x7c
	char sendBuffer[0x30];                     // 0x80
	char encodeBuffer[0x30];                   // 0xb0
	char recvBuffer[0x30];                     // 0xe0
	char decodeBuffer[0x30];                   // 0x110
	char getFileBuffer[0x30];                  // 0x140
	int userBufferSupplied;                    // 0x170
	int statusMajorVersion;                    // 0x174
	int statusMinorVersion;                    // 0x178
	int statusCode;                            // 0x17c
	int statusStringIndex;                     // 0x180
	int headerStringIndex;                     // 0x184
	int completed;                             // 0x188
	int field18c;                              // 0x18c
	int fileBytesReceived;                     // 0x190
	int pad194;                                // 0x194
	char * redirectURL;                        // 0x198
	int redirectCount;                         // 0x1a0
	int chunkedTransfer;                       // 0x1a4
	char chunkHeader[12];                      // 0x1a8
	int chunkHeaderLen;                        // 0x1b4
	int chunkBytesLeft;                        // 0x1b8
	int chunkReadingState;                     // 0x1bc
	int processing;                            // 0x1c0
	int connectionClosed;                      // 0x1c4
	int throttle;                              // 0x1c8
	unsigned int lastThrottleRecv;             // 0x1cc
	void * post;                               // 0x1d0
	void * postingStateStates;                 // 0x1d8
	char pad1e0[0x20];                         // 0x1e0
	int field200;                              // 0x200
	char pad204[4];                            // 0x204
	char * proxyOverrideServer;                // 0x208
	unsigned short proxyOverridePort;          // 0x210
	char pad212[6];                            // 0x212
	GHIEncryptor encryptor;                    // 0x218
	char pad240[0x10];                         // 0x240
};

extern "C" void * memset(void * dest, int c, unsigned long count);
#define NULL 0
extern "C" void ghiLock(void);
extern "C" void ghiUnlock(void);
extern "C" void * gsimalloc(int size);
extern "C" void * gsirealloc(void * ptr, unsigned long size);
extern "C" void gsifree(void * ptr);
extern "C" GHTTPBool ghiInitBuffer(GHIConnection * connection, void * buffer, int initialSize, int incrementSize);
extern "C" GHTTPBool ghiFreeConnection(GHIConnection * connection);
extern "C" void __assert_fail(const char * expr, const char * file, unsigned int line, const char * fn) __attribute__((noreturn));
extern "C" int ghiConnectionsLen;
extern "C" int ghiNumConnections;
extern "C" int ghiNextUniqueID;
extern "C" GHIConnection ** ghiConnections;

static int ghiFindFreeSlot(void)
{
	int i;

	//Find a free connection
	for (i = 0 ; i < ghiConnectionsLen ; i++)
	{
		if (!ghiConnections[i]->inUse)
			return i;
	}

	//No free connection, add some more
	if (!(ghiNumConnections == ghiConnectionsLen))
		__assert_fail("ghiNumConnections == ghiConnectionsLen", "External/GameSpy/ghttp/ghttpConnection.c", 0x33, "ghiFindFreeSlot");

	int connectionIndex = ghiNumConnections;
	GHIConnection ** tempPtr = (GHIConnection **)gsirealloc(ghiConnections, sizeof(GHIConnection *) * (connectionIndex + 4));
	if (!tempPtr)
		return -1;
	ghiConnections = tempPtr;
	for (i = connectionIndex ; i < connectionIndex + 4 ; i++)
	{
		ghiConnections[i] = (GHIConnection *)gsimalloc(sizeof(GHIConnection));
		if (!ghiConnections[i])
		{
			for (i-- ; i >= connectionIndex ; i--)
				gsifree(ghiConnections[i]);
			return -1;
		}
		ghiConnections[i]->inUse = 0;
	}
	ghiConnectionsLen = connectionIndex + 4;
	return connectionIndex;
}

extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
GHIConnection * ghiNewConnection(void)
{
	int connectionIndex;
	int bResult;
	GHIConnection * connection = NULL;

	ghiLock();

	connectionIndex = ghiFindFreeSlot();
	if (connectionIndex == -1)
	{
		connection = NULL;
		ghiUnlock();
		return connection;
	}

	connection = ghiConnections[connectionIndex];
	memset(connection, 0, sizeof(GHIConnection));
	connection->request = connectionIndex;
	connection->inUse = 1;
	connection->type = 0;
	connection->state = 0;
	connection->URL = NULL;
	connection->uniqueID = ghiNextUniqueID++;
	connection->serverAddress = NULL;
	connection->serverPort = 0;
	connection->serverIP = 0;
	connection->requestPath = NULL;
	connection->sendHeaders = NULL;
	connection->saveFile = NULL;
	connection->blocking = 0;
	connection->persistConnection = 0;
	connection->result = 0;
	connection->progressCallback = NULL;
	connection->completedCallback = NULL;
	connection->callbackParam = NULL;
	connection->socket = -1;
	connection->socketError = 0;
	connection->userBufferSupplied = 0;
	connection->statusMajorVersion = 0;
	connection->statusMinorVersion = 0;
	connection->statusCode = 0;
	connection->statusStringIndex = 0;
	connection->headerStringIndex = 0;
	connection->completed = 0;
	connection->field18c = 0;
	connection->fileBytesReceived = -1;
	connection->redirectURL = NULL;
	connection->redirectCount = 0;
	connection->chunkedTransfer = 0;
	connection->processing = 0;
	connection->throttle = 0;
	connection->lastThrottleRecv = 0;
	connection->post = NULL;
	connection->field200 = 500;
	connection->proxyOverridePort = 80;
	connection->proxyOverrideServer = NULL;
	connection->encryptor.data = NULL;

	bResult = ghiInitBuffer(connection, connection->sendBuffer, 2048, 4096);
	if(bResult)
		bResult = ghiInitBuffer(connection, connection->encodeBuffer, 2048, 1024);
	if(bResult)
		bResult = ghiInitBuffer(connection, connection->recvBuffer, 2048, 2048);
	if (bResult)
		bResult = ghiInitBuffer(connection, connection->decodeBuffer, 2048, 1024);

	if(!bResult)
	{
		ghiFreeConnection(connection);
		connection = NULL;
		ghiUnlock();
		return connection;
	}

	ghiNumConnections++;
	ghiUnlock();
	return connection;
}
