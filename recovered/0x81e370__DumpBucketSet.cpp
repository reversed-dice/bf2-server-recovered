// FUNCTION: BF2 0x81e370
extern "C" void* gsimalloc(unsigned long size);
extern "C" void TableMap(void* hashtable, void* fn, void* ctx);
extern "C" void DumpMap();
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

void* g_buckets;

struct DumpBuf {
    char* str;
    int size;
    int len;
};

extern "C" char* DumpBucketSet(void* set)
{
    DumpBuf buf;
    if (set == 0 && (set = g_buckets) == 0)
        __assert_fail("set", "External/GameSpy/gstats/gbucket.c", 102, "DumpBucketSet");
    buf.str = (char*)gsimalloc(0x80);
    buf.str[0] = 0;
    buf.len = 0;
    buf.size = 0x80;
    TableMap(*(void**)set, (void*)DumpMap, &buf);
    return buf.str;
}
