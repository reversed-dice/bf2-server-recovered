// FUNCTION: BF2 0x83af60
#include <cstring>
#include <cstdlib>

typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;

extern "C" {
void *ArrayNth(DArray array, int n);
void SetElement(DArray array, const void *elem, int pos);
void *gsirealloc(void *ptr, unsigned long size);
void ArrayInsertAt(DArray array, const void *newElem, int n);
}

static inline void ArrayGrow(DArray array)
{
	array->capacity += array->growby;
	array->list = gsirealloc(array->list, (size_t)array->capacity * (size_t)array->elemsize);
}

void ArrayInsertAt(DArray array, const void *newElem, int n)
{
	if (array->count == array->capacity)
		ArrayGrow(array);
	array->count++;
	if (n < array->count - 1)
		memmove(ArrayNth(array, n+1), ArrayNth(array,n), 
				(size_t)(array->count - 1 - n) * (size_t)array->elemsize);
	SetElement(array, newElem, n);
}
