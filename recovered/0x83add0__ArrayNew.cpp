// FUNCTION: BF2 0x83add0
#include <cstring>
#include <cstdlib>

typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
#define DEF_GROWBY 8
typedef struct DArrayImplementation *DArray;
extern "C" {
void* gsimalloc(unsigned long);
}

DArray ArrayNew(int elemSize, int numElemsToAllocate, 
                ArrayElementFreeFn elemFreeFn)
{
	DArray array;

	array = (DArray) gsimalloc(sizeof(struct DArrayImplementation));
	if (numElemsToAllocate == 0)
		numElemsToAllocate = DEF_GROWBY;
	array->count	= 0;
	array->capacity = numElemsToAllocate;
	array->elemsize = elemSize;
	array->growby	= numElemsToAllocate;
	array->elemfreefn = elemFreeFn;
	if (array->capacity != 0)
	{
		array->list = gsimalloc((size_t)array->capacity * (size_t)array->elemsize);
	} else
		array->list = 0;

	return array;
}
