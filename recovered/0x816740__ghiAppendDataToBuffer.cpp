// FUNCTION: BF2 0x816740
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
extern "C" void *memcpy(void *dst, const void *src, unsigned long n);
extern "C" unsigned long strlen(const char *s);

typedef int GHTTPBool;
struct GHIConnection;

typedef struct GHIBuffer
{
	struct GHIConnection * connection;  // 0x0
	char * data;                        // 0x8
	int size;                           // 0x10
	int len;                            // 0x14
	int pos;                            // 0x18
	int sizeIncrement;                  // 0x1c
	GHTTPBool fixed;                    // 0x20
	GHTTPBool dontFree;                 // 0x24
	GHTTPBool readOnly;                 // 0x28
} GHIBuffer;

typedef struct GHIConnection {
	char pad0[0x58];
	int result;                         // 0x58
	char pad1[0x188-0x5c];
	int completed;                      // 0x188
} GHIConnection;

extern "C" GHTTPBool ghiResizeBuffer(GHIBuffer *buffer, int sizeIncrement);

// compile-state padding: 12 unused functions, see trick 378
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
GHTTPBool ghiAppendDataToBuffer(GHIBuffer * buffer, const char * data, int dataLen)
{
	GHTTPBool bResult;
	int newLen;

	if (buffer == 0)
		__assert_fail("buffer", "External/GameSpy/ghttp/ghttpBuffer.c", 0xe3, "ghiAppendDataToBuffer");
	if (data == 0)
		__assert_fail("data", "External/GameSpy/ghttp/ghttpBuffer.c", 0xe4, "ghiAppendDataToBuffer");
	if (dataLen < 0)
		__assert_fail("dataLen >= 0", "External/GameSpy/ghttp/ghttpBuffer.c", 0xe5, "ghiAppendDataToBuffer");

	if(!data)
		return 0;
	if(dataLen < 0)
		return 0;
	if (buffer->readOnly)
		return 0;

	if(dataLen == 0)
		dataLen = (int)strlen(data);

	newLen = (buffer->len + dataLen);

	while(newLen >= buffer->size)
	{
		if(buffer->fixed)
		{
			buffer->connection->completed = 1;
			buffer->connection->result = 2;
			return 0;
		}

		bResult = ghiResizeBuffer(buffer, buffer->sizeIncrement);
		if(!bResult)
		{
			buffer->connection->completed = 1;
			buffer->connection->result = 1;
			return 0;
		}
	}

	memcpy(buffer->data + buffer->len, data, (unsigned int)dataLen);
	buffer->len = newLen;
	buffer->data[buffer->len] = '\0';
	return 1;
}
