// FUNCTION: BF2 0x817160
extern "C" int * __errno_location(void);
extern "C" long recv(int sock, void * buf, unsigned long len, int flags);
extern "C" unsigned int current_time(...);

int ghiThrottleTimeDelay;
int ghiThrottleBufferSize;

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

// compile-state padding: 8 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
int ghiDoReceive(GHIConnection * connection, char buffer[], int * bufferLen)
{
	int rcode;
	int socketError;
	int len;

	len = (*bufferLen - 1);

	if(connection->throttle)
	{
		unsigned long now;

		now = current_time();
		if(now < (connection->lastThrottleRecv + ghiThrottleTimeDelay))
			return 1;

		connection->lastThrottleRecv = now;

		len = (len > ghiThrottleBufferSize) ? ghiThrottleBufferSize : len;
	}

	rcode = (int)recv(connection->socket, buffer, len, 0);

	if(rcode == -1)
	{
		socketError = *__errno_location();

		if(socketError == 0x6b)
		{
			connection->connectionClosed = 1;
			return 2;
		}

		if((socketError == 0xb) || (socketError == 0x73) || (socketError == 0x6e))
			return 1;

		connection->completed = 1;
		connection->result = 5;
		connection->socketError = socketError;
		connection->connectionClosed = 1;

		return 3;
	}

	if(rcode == 0)
	{
		connection->connectionClosed = 1;
		return 2;
	}

	buffer[rcode] = '\0';
	*bufferLen = rcode;

	return 0;
}
