// FUNCTION: BF2 0x81ebd0
extern "C" char* goastrdup(const char* str);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct bucketset_s;
typedef bucketset_s* bucketset_t;
typedef int BucketType;

struct bucket_t
{
    char* name;
    BucketType type;
    int nvals;
    union { int ival; double fval; char* sval; } vals;
};

extern bucketset_t g_buckets;
extern "C" int TableEnter(void* table, void* entry);
extern "C" void* DoSet(bucket_t* pbucket, void* value);
extern "C" void* DoGet(bucket_t* pbucket);
extern "C" bucket_t* DoFind(bucketset_t set, char* name);

void* BucketNew(bucketset_t set, char* name, BucketType type, void* initialvalue)
{
    bucket_t bucket;

    if (set == 0)
        set = g_buckets;
    if (set == 0)
        __assert_fail("set", "External/GameSpy/gstats/gbucket.c", 0x75, "BucketNew");

    bucket.name = goastrdup(name);
    bucket.type = type;
    bucket.vals.sval = 0;
    bucket.nvals = 1;
    DoSet(&bucket, initialvalue);
    TableEnter(*(void**)set, &bucket);
    return DoGet(DoFind(set, name));
}
