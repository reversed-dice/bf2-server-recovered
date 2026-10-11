// FUNCTION: BF2 0x816d90
#include <string.h>

extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

typedef int GHTTPBool;
#define GHTTPTrue 1
#define GHTTPFalse 0

typedef struct GHIBuffer
{
	void * connection;
	char * data;
	int size;
	int len;
	int pos;
	int sizeIncrement;
	GHTTPBool fixed;
	GHTTPBool dontFree;
	GHTTPBool readOnly;
} GHIBuffer;

extern "C" GHTTPBool ghiReadDataFromBufferFixed
(
	GHIBuffer * bufferIn,
	char        bufferOut[],
	int         bytesToCopy
)
{
	if (!(bufferIn != ((void *)0))) {
		__assert_fail("bufferIn != ((void *)0)", "External/GameSpy/ghttp/ghttpBuffer.c", 548, __PRETTY_FUNCTION__);
	}
	if (bytesToCopy == 0)
		return GHTTPTrue;

	if (bufferIn->len < bytesToCopy)
		return GHTTPFalse;

	memcpy(bufferOut, bufferIn->data + bufferIn->pos, (size_t)bytesToCopy);

	bufferIn->pos += bytesToCopy;
	return GHTTPTrue;
}
