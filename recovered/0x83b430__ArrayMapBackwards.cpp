// FUNCTION: BF2 0x83b430
// upstream GameSpy/darray.c ArrayMapBackwards
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void (*ArrayElementFreeFn)(void *elem);
typedef void (*ArrayMapFn)(void *elem, void *clientData);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;
extern "C" {
void * ArrayNth(DArray array, int n);
int fn(...);
}

void ArrayMapBackwards(DArray array, ArrayMapFn fn, void *clientData)
{
	int i;

	GS_ASSERT(fn);

	for (i = (array->count - 1) ; i >= 0 ; i--)
		fn(ArrayNth(array,i), clientData);
		
}
