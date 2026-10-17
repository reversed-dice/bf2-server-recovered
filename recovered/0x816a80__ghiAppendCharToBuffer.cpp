// FUNCTION: BF2 0x816a80
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
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

// compile-state padding: 20 unused functions, see trick 378
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
GHTTPBool ghiAppendCharToBuffer(GHIBuffer * buffer, int c)
{
	GHTTPBool bResult;

	if (buffer == 0)
		__assert_fail("buffer", "External/GameSpy/ghttp/ghttpBuffer.c", 0x17b, "ghiAppendCharToBuffer");

	if (buffer->readOnly)
		return 0;

	if((buffer->len + 1) >= buffer->size)
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

	buffer->data[buffer->len] = (char)(c & 0xFF);
	buffer->len++;
	buffer->data[buffer->len] = '\0';

	return 1;
}
