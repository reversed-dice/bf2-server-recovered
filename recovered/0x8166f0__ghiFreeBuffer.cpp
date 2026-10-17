// FUNCTION: BF2 0x8166f0
#include <string.h>

extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));
extern "C" void gsifree(void *ptr);

typedef int GHTTPBool;

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

// compile-state padding: 7 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" void ghiFreeBuffer(GHIBuffer * buffer)
{
	if (!buffer) {
		__assert_fail("buffer", "External/GameSpy/ghttp/ghttpBuffer.c", 201, __PRETTY_FUNCTION__);
	}

	if(!buffer)
		return;
	if(!buffer->data)
		return;

	if(!buffer->dontFree)
		gsifree(buffer->data);
	memset(buffer, 0, sizeof(GHIBuffer));
}
