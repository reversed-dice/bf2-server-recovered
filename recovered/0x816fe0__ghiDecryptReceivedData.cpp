// FUNCTION: BF2 0x816fe0
extern "C" void * memmove(void * dst, const void * src, unsigned long n);

typedef int GHTTPBool;

struct GHIEncryptor
{
	void * mInterface;                // 0x00
	int mEngine;                      // 0x08
	int mInitialized;                 // 0x0c
	int mSessionStarted;              // 0x10
	int mSessionEstablished;          // 0x14
	int mEncryptOnBuffer;             // 0x18
	int mEncryptOnSend;               // 0x1c
	int mLibSendsHandshakeMessages;   // 0x20
	int pad24;                        // 0x24
	void * mInitFunc;                 // 0x28
	void * mDecryptFunc;              // 0x30
};

struct GHIBuffer
{
	void * connection;       // 0x00
	char * data;             // 0x08
	int size;                // 0x10
	int len;                 // 0x14
	int pos;                 // 0x18
	int sizeIncrement;       // 0x1c
	int fixed;               // 0x20
	int dontFree;            // 0x24
	int readOnly;            // 0x28
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

extern "C" int ghiResizeBuffer(GHIBuffer * buffer, int sizeIncrement);
extern "C" void ghiResetBuffer(GHIBuffer * buffer);

GHTTPBool ghiDecryptReceivedData(GHIConnection * connection)
{
	typedef int (*GHIDecryptFunc)(GHIConnection *, GHIEncryptor *, const char *, int *, char *, int *);

	int aResult = 0;
	char * aReadPos = 0;
	char * aWritePos = 0;
	int aReadLen = 0;
	int aWriteLen = 0;

	do
	{
		do
		{
			aReadPos  = connection->decodeBuffer.data + connection->decodeBuffer.pos;
			aReadLen  = connection->decodeBuffer.len  - connection->decodeBuffer.pos;
			aWritePos = connection->recvBuffer.data + connection->recvBuffer.len;
			aWriteLen = connection->recvBuffer.size - connection->recvBuffer.len;

			aResult = ((GHIDecryptFunc)connection->encryptor.mDecryptFunc)(connection, &connection->encryptor,
				aReadPos, &aReadLen, aWritePos, &aWriteLen);

			if (aResult == 2)
			{
				if (ghiResizeBuffer(&connection->recvBuffer, connection->recvBuffer.sizeIncrement) == 0)
					return 0;
			}
			else if (aResult == 3)
			{
				return 0;
			}
		} while (aResult == 2 && aWriteLen == 0);

		if (aReadLen > connection->decodeBuffer.len)
			return 0;

		connection->decodeBuffer.pos += aReadLen;
		connection->recvBuffer.len   += aWriteLen;

	} while (aWriteLen > 0);

	if (connection->decodeBuffer.pos > 0xFF)
	{
		int bytesToKeep = connection->decodeBuffer.len - connection->decodeBuffer.pos;
		if (bytesToKeep == 0)
			ghiResetBuffer(&connection->decodeBuffer);
		else
		{
			memmove(connection->decodeBuffer.data,
					connection->decodeBuffer.data + connection->decodeBuffer.pos,
					(unsigned long)bytesToKeep);
			connection->decodeBuffer.pos = 0;
			connection->decodeBuffer.len = bytesToKeep;
		}
	}

	return 1;
}
