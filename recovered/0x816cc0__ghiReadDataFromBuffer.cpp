// FUNCTION: BF2 0x816cc0
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

#define gsmin(a,b) ((a) <= (b) ? (a) : (b))
extern "C" void *memcpy(void *dst, const void *src, unsigned long n);

GHTTPBool ghiReadDataFromBuffer(GHIBuffer * bufferIn, char bufferOut[], int * len)
{
	int bytesAvailable = 0;
	int bytesToCopy    = 0;

	if (bufferIn == 0)
		__assert_fail("bufferIn != ((void *)0)", "External/GameSpy/ghttp/ghttpBuffer.c", 0x203, "ghiReadDataFromBuffer");
	if (len == 0)
		__assert_fail("len != ((void *)0)", "External/GameSpy/ghttp/ghttpBuffer.c", 0x204, "ghiReadDataFromBuffer");
	if (*len == 0)
		return 0;

	bytesAvailable = (int)bufferIn->len - bufferIn->pos;
	if (bytesAvailable <= 0)
		return 0;

	bytesToCopy = gsmin(bytesAvailable, *len-1);

	memcpy(bufferOut, bufferIn->data + bufferIn->pos, (unsigned long)bytesToCopy);
	bufferOut[bytesToCopy] = '\0';
	*len = bytesToCopy;

	bufferIn->pos += bytesToCopy;
	return 1;
}
