// FUNCTION: BF2 0x83b520
// upstream GameSpy/darray.c ArrayMapBackwards2
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

void * ArrayMapBackwards2(DArray array, ArrayMapFn2 fn, void *clientData)
{
	int i;
	void * pcurr;

	GS_ASSERT(fn);
	GS_ASSERT(clientData);

	for (i = (array->count - 1) ; i >= 0 ; i--)
	{
		pcurr = ArrayNth(array,i);
		if(!fn(pcurr, clientData))
			return pcurr;
	}

	return NULL;
}
