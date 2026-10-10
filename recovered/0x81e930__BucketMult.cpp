// FUNCTION: BF2 0x81e930
// upstream GameSpy/gstats/gbucket.c BucketMult
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define GS_STATIC_CALLBACK
#define GSI_STATIC_CALLBACK
#define GS_STATIC_FN
typedef void (*ArrayElementFreeFn)(void *elem);
typedef enum {bt_int, bt_float, bt_string} BucketType;
struct DArrayImplementation { int count, capacity; int elemsize; int growby; ArrayElementFreeFn elemfreefn; void *list; };
typedef int (*TableCompareFn)(const void *elem1, const void *elem2);
typedef void (*TableElementFreeFn)(void *elem);
typedef int (*TableHashFn)(const void *elem, int numBuckets);
typedef struct bucket_s { char *name; BucketType type; int nvals; union { int ival; double fval; char *sval; } vals; } bucket_t;
typedef struct DArrayImplementation *DArray;
struct HashImplementation { DArray *buckets; int nbuckets; TableElementFreeFn freefn; TableHashFn hashfn; TableCompareFn compfn; };
typedef struct HashImplementation *HashTable;
struct bucketset_s { HashTable buckets; };
typedef struct bucketset_s *bucketset_t;
extern "C" {
bucket_t * DoFind(bucketset_t set, char *name);
void * DoGet(bucket_t *pbucket);
void * DoSet(bucket_t *pbucket, void *value);
void * bfloat(double f);
void * bint(int i);
}

void *BucketMult(bucketset_t set, char *name, void *value)
{
	bucket_t *pbucket = DoFind(set, name);	
	if (!pbucket)
		return NULL;

	if (pbucket->type == bt_int)
		return DoSet(pbucket, bint( (*(int *)DoGet(pbucket)) * (*(int *)value)));
	if (pbucket->type == bt_float)
		return DoSet(pbucket, bfloat( (*(double *)DoGet(pbucket)) * (*(double *)value)));
	//else, string -- just  ignore
	return DoGet(pbucket);
}
