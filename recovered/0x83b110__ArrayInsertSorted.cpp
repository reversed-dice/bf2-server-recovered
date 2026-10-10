// FUNCTION: BF2 0x83b110
// upstream GameSpy/darray.c ArrayInsertSorted
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef int (*ArrayCompareFn)(const void *elem1, const void *elem2);
typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;
extern "C" {
void ArrayInsertAt(DArray array, const void *newElem, int n);
void * mybsearch(const void *elem, void *base, int num, int elemsize, ArrayCompareFn comparator, int *found);
}

void ArrayInsertSorted(DArray array, const void *newElem, ArrayCompareFn comparator)
{
	int n;
	void *res;
	int found;

	GS_ASSERT (array)
	GS_ASSERT (comparator);

	res=mybsearch(newElem, array->list,	array->count, array->elemsize, comparator, &found);
	n = (((char *)res - (char *)array->list) / array->elemsize);
	ArrayInsertAt(array, newElem, n);
}
