// FUNCTION: BF2 0x816870
typedef int GHTTPBool;

typedef enum
{
	GHIEncryptionResult_None,
	GHIEncryptionResult_Success,
	GHIEncryptionResult_BufferTooSmall,
	GHIEncryptionResult_Error
} GHIEncryptionResult;

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

struct GHIBuffer;

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

struct GHIConnection;

struct GHIBuffer
{
	GHIConnection * connection;   // 0x00
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
	char pad0[0x218];
	GHIEncryptor encryptor;   // 0x218
};

typedef GHIEncryptionResult (*GHTTPEncryptorEncryptFunc)(GHIConnection * theConnection,
														 GHIEncryptor * theEncryptor,
														 const char * thePlainTextBuffer,
														 int thePlainTextLength,
														 char * theEncryptedBuffer,
														 int * theEncryptedLength);

extern "C" void __assert_fail(const char * assertion, const char * file, unsigned int line, const char * function) __attribute__((noreturn));
extern "C" GHTTPBool ghiAppendDataToBuffer(GHIBuffer * buffer, const char * data, int dataLen);
extern "C" GHTTPBool ghiResizeBuffer(GHIBuffer * buffer, int sizeIncrement);
extern "C" unsigned long strlen(const char * s);

enum { GS_SSL_MAX_CONTENTLENGTH = 0x4000 };

#define min(a, b) (((a) < (b)) ? (a) : (b))

// compile-state padding: 14 unused functions, see trick 378
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
GHTTPBool ghiEncryptDataToBuffer(GHIBuffer * buffer, const char * data, int dataLen)
{
	GHIEncryptionResult result;
	int bufSpace = 0;
	int pos = 0;

	if (!buffer)
		__assert_fail("buffer", "External/GameSpy/ghttp/ghttpBuffer.c", 294, __PRETTY_FUNCTION__);
	if (!data)
		__assert_fail("data", "External/GameSpy/ghttp/ghttpBuffer.c", 295, __PRETTY_FUNCTION__);
	if (dataLen < 0)
		__assert_fail("dataLen >= 0", "External/GameSpy/ghttp/ghttpBuffer.c", 296, __PRETTY_FUNCTION__);

	if (buffer->readOnly)
		return GHTTPFalse;

	if (buffer->connection->encryptor.mEngine == GHTTPEncryptionEngine_None ||
		buffer->connection->encryptor.mSessionEstablished == GHTTPFalse)
	{
		return ghiAppendDataToBuffer(buffer, data, dataLen);
	}

	if (dataLen == 0)
		dataLen = (int)strlen(data);
	bufSpace = buffer->size - buffer->len;

	do
	{
		int fragmentLen = min(dataLen, GS_SSL_MAX_CONTENTLENGTH);

		result = ((GHTTPEncryptorEncryptFunc)buffer->connection->encryptor.mEncryptFunc)(
			buffer->connection, &buffer->connection->encryptor,
			&data[pos], dataLen, &buffer->data[buffer->len], &bufSpace);
		if (result == GHIEncryptionResult_BufferTooSmall)
		{
			if (ghiResizeBuffer(buffer, buffer->sizeIncrement) == GHTTPFalse)
				return GHTTPFalse;
		}
		else if (result == GHIEncryptionResult_Success)
		{
			pos += fragmentLen;
			buffer->len = buffer->size - bufSpace;
		}
		else
		{
			return GHTTPFalse;
		}
	} while (pos < dataLen);

	return GHTTPTrue;
}
