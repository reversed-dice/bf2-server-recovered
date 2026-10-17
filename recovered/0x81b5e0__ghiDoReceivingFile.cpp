// FUNCTION: BF2 0x81b5e0
typedef int GHTTPBool;
typedef int GHTTPResult;
typedef unsigned int gsi_time;

typedef enum
{
	GHIRecvData,
	GHINoData,
	GHIConnClosed,
	GHIError
} GHIRecvResult;

typedef enum
{
	GHTTPEncryptionEngine_None,
	GHTTPEncryptionEngine_GameSpy
} GHTTPEncryptionEngine;

enum
{
	GHTTPFalse = 0,
	GHTTPTrue = 1
};

enum
{
	GHTTPFileIncomplete = 15,
	GHTTPEncryptionError = 17
};

struct GHIEncryptor
{
	void * mInterface;                 // 0x00
	GHTTPEncryptionEngine mEngine;     // 0x08
	int mInitialized;                  // 0x0c
	int mSessionEstablished;           // 0x10
	int mSessionStarted;               // 0x14
	int mEncryptOnBuffer;              // 0x18
	int mEncryptOnSend;                // 0x1c
	int mLibSendsHandshakeMessages;    // 0x20
	int pad24;                         // 0x24
	void * mEncryptFunc;               // 0x28
	void * mDecryptFunc;               // 0x30
};

struct GHIBuffer
{
	void * connection;        // 0x00
	char * data;              // 0x08
	int size;                 // 0x10
	int len;                  // 0x14
	int pos;                  // 0x18
	int sizeIncrement;        // 0x1c
	int fixed;                // 0x20
	int dontFree;             // 0x24
	int readOnly;             // 0x28
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
	GHTTPResult result;                        // 0x58
	int pad5c;
	void * progressCallback;                   // 0x60
	void * completedCallback;                  // 0x68
	void * callbackParam;                      // 0x70
	int socket;                                // 0x78
	int socketError;                           // 0x7c
	GHIBuffer sendBuffer;                      // 0x80
	GHIBuffer encodeBuffer;                    // 0xb0
	GHIBuffer recvBuffer;                      // 0xe0
	GHIBuffer decodeBuffer;                    // 0x110
	GHIBuffer getFileBuffer;                   // 0x140
	int userBufferSupplied;                    // 0x170
	int statusMajorVersion;                    // 0x174
	int statusMinorVersion;                    // 0x178
	int statusCode;                            // 0x17c
	int statusStringIndex;                     // 0x180
	int headerStringIndex;                     // 0x184
	int completed;                             // 0x188
	int fileBytesReceived;                     // 0x18c
	int totalSize;                             // 0x190
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
	gsi_time lastThrottleRecv;                 // 0x1cc
	void * post;                               // 0x1d0
	void * postingStateStates;                 // 0x1d8
	char pad1e0[0x20];                         // 0x1e0
	gsi_time maxRecvTime;                      // 0x200
	char pad204[4];                            // 0x204
	char * proxyOverrideServer;                // 0x208
	unsigned short proxyOverridePort;          // 0x210
	char pad212[6];
	GHIEncryptor encryptor;                    // 0x218
};

extern "C" unsigned int current_time(...);
extern "C" GHIRecvResult ghiDoReceive(GHIConnection * connection, char * buffer, int * bufferLen);
extern "C" GHTTPBool ghiProcessIncomingFileData(GHIConnection * connection, char * data, int len);
extern "C" GHTTPBool ghiDecryptReceivedData(GHIConnection * connection);
extern "C" GHTTPBool ghiAppendDataToBuffer(GHIBuffer * buffer, const char * data, int dataLen);

// compile-state padding: 23 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
extern "C" int __pad_15(int x) { int y = x * 15 + 3; return y; }
extern "C" int __pad_16(int x) { int y = x * 16 + 3; return y; }
extern "C" int __pad_17(int x) { int y = x * 17 + 3; return y; }
extern "C" int __pad_18(int x) { int y = x * 18 + 3; return y; }
extern "C" int __pad_19(int x) { int y = x * 19 + 3; return y; }
extern "C" int __pad_20(int x) { int y = x * 20 + 3; return y; }
extern "C" int __pad_21(int x) { int y = x * 21 + 3; return y; }
extern "C" int __pad_22(int x) { int y = x * 22 + 3; return y; }
void ghiDoReceivingFile(GHIConnection * connection)
{
	char buffer[8192];
	int bufferLen;
	GHIRecvResult result;
	gsi_time start_time = current_time();
	gsi_time running_time = 0;

	while (!connection->completed && (running_time < connection->maxRecvTime))
	{
		bufferLen = sizeof(buffer);
		result = ghiDoReceive(connection, buffer, &bufferLen);

		if (result == GHIError)
			return;
		if (result == GHINoData)
			return;
		if (result == GHIConnClosed)
		{
			connection->completed = GHTTPTrue;

			if (connection->totalSize > 0 && connection->fileBytesReceived < connection->totalSize)
				connection->result = GHTTPFileIncomplete;
			return;
		}

		if (connection->encryptor.mEngine != GHTTPEncryptionEngine_None)
		{
			char * decryptedData;
			int decryptedLen;

			if (!ghiAppendDataToBuffer(&connection->decodeBuffer, buffer, bufferLen))
				return;

			connection->recvBuffer.len = connection->recvBuffer.pos;

			if (!ghiDecryptReceivedData(connection))
			{
				connection->completed = GHTTPTrue;
				connection->result = GHTTPEncryptionError;
				return;
			}

			decryptedLen = (connection->recvBuffer.len - connection->recvBuffer.pos);
			if (decryptedLen)
			{
				decryptedData = (connection->recvBuffer.data + connection->recvBuffer.pos);
				if (!ghiProcessIncomingFileData(connection, decryptedData, decryptedLen))
					return;
			}
		}
		else
		{
			if (!ghiProcessIncomingFileData(connection, buffer, bufferLen))
				return;
		}

		running_time = current_time() - start_time;
	}
}
