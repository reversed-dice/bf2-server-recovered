// FUNCTION: BF2 0x83b170
#include <cstring>
#include <cstdlib>

typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;

extern "C" {
void *ArrayNth(DArray array, int n);
void ArrayRemoveAt(DArray array, int n);
}

void ArrayRemoveAt(DArray array, int n)
{
	if (n < array->count - 1)
		memmove(ArrayNth(array,n), ArrayNth(array,n+1),
			    (size_t)(array->count - 1 - n) * (size_t)array->elemsize);
	array->count--;
}
