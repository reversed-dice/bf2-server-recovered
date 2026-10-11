// FUNCTION: BF2 0x817c60
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
extern "C" void * gsifree(void * ptr);
extern "C" int shutdown(int sock, int how);
extern "C" int close(int fd);
extern "C" void ghiResetBuffer(void * buffer);
extern "C" int strncmp(const char *, const char *, unsigned long);

struct GHIEncryptor
{
	void * mInterface;       // 0x00
	int mEngine;             // 0x08
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
	char pad2e[2];
	char * requestPath;                        // 0x30
	int protocol;                              // 0x38
	int pad3c;
	char * sendHeaders;                        // 0x40
	void * saveFile;                           // 0x48
	int blocking;                              // 0x50
	int persistConnection;                     // 0x54
	int result;                                // 0x58
	int pad5c;
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
	int pad18c;
	long long fileBytesReceived;               // 0x190
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
	char pad1e0[0x28];
	char * proxyOverrideServer;                // 0x208
	unsigned short proxyOverridePort;          // 0x210
	char pad212[6];
	GHIEncryptor encryptor;                    // 0x218
};

void ghiRedirectConnection(GHIConnection * connection)
{
	if (!connection)
		__assert_fail("connection", "External/GameSpy/ghttp/ghttpConnection.c", 0x134, "__PRETTY_FUNCTION__.4652");
	if (!connection->redirectURL)
		__assert_fail("connection->redirectURL", "External/GameSpy/ghttp/ghttpConnection.c", 0x135, "__PRETTY_FUNCTION__.4652");

	connection->state = 0;

	gsifree(connection->URL);
	connection->URL = connection->redirectURL;
	connection->redirectURL = 0;

	gsifree(connection->serverAddress);
	connection->serverAddress = 0;
	connection->serverIP = 0;
	connection->serverPort = 0;
	gsifree(connection->requestPath);
	connection->requestPath = 0;

	shutdown(connection->socket, 2);
	close(connection->socket);
	connection->socket = -1;

	ghiResetBuffer(&connection->sendBuffer);
	ghiResetBuffer(&connection->encodeBuffer);
	ghiResetBuffer(&connection->recvBuffer);
	ghiResetBuffer(&connection->decodeBuffer);

	connection->statusMajorVersion = 0;
	connection->statusMinorVersion = 0;
	connection->statusCode = 0;
	connection->statusStringIndex = 0;
	connection->headerStringIndex = 0;
	connection->connectionClosed = 0;

	if (connection->encryptor.mInitialized != 0)
	{
		if (connection->encryptor.mCleanupFunc)
			((void (*)(GHIConnection *, GHIEncryptor *))connection->encryptor.mCleanupFunc)(connection, &connection->encryptor);
		connection->encryptor.mInitialized = 0;
		if (strncmp("https://", connection->URL, 8) != 0)
		{
			connection->encryptor.mEngine = 0;
			connection->encryptor.mInterface = 0;
		}
	}

	connection->redirectCount++;
}
