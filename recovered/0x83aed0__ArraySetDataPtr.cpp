// FUNCTION: BF2 0x83aed0
// upstream GameSpy/darray.c ArraySetDataPtr
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef void (*ArrayElementFreeFn)(void *elem);
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef struct DArrayImplementation *DArray;
#define gsifree free
extern "C" {
void FreeElement(DArray array, int n);
void gsifree(void*);
}

// compile-state padding: 7 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
void ArraySetDataPtr(DArray array, void *ptr, int count, int capacity)
{
	int i;
	
	GS_ASSERT(array);
	if (array->list != NULL)
	{
		for (i = 0; i < array->count; i++)
		{
			FreeElement(array, i);
		}
		gsifree(array->list);
	}
	array->list = ptr;
	array->count = count;
	array->capacity = capacity;

}
