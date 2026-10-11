// FUNCTION: BF2 0x81e2b0
extern "C" void* gsimalloc(int);
extern "C" void* TableNew(int size, int entrySize, void* hash, void* compare, void* freefn);
extern "C" void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
extern "C" void BucketHash(void);
extern "C" void BucketCompare(void);
extern "C" void BucketFree(void);

struct BucketSet { void* table; };
extern "C" BucketSet* g_buckets;

extern "C" BucketSet* NewBucketSet(void)
{
    BucketSet* set = (BucketSet*)gsimalloc(8);
    if (set == 0)
        __assert_fail("set", "External/GameSpy/gstats/gbucket.c", 0x52, __PRETTY_FUNCTION__);
    set->table = TableNew(0x18, 0x20, (void*)BucketHash, (void*)BucketCompare, (void*)BucketFree);
    g_buckets = set;
    return set;
}
