// FUNCTION: BF2 0x83b4a0
// upstream GameSpy/darray.c ArrayMap2
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void (*ArrayElementFreeFn)(void *elem);
typedef int (*ArrayMapFn2)(void *elem, void *clientData);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;
extern "C" {
void * ArrayNth(DArray array, int n);
int fn(...);
}

// compile-state padding: 16 unused functions, see trick 378
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
void * ArrayMap2(DArray array, ArrayMapFn2 fn, void *clientData)
{
	int i;
	void * pcurr;

	GS_ASSERT(fn);
	GS_ASSERT(clientData);

	for (i = 0; i < array->count; i++)
	{
		pcurr = ArrayNth(array,i);
		if(!fn(pcurr, clientData))
			return pcurr;
	}

	return NULL;
}
