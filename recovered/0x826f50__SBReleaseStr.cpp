// FUNCTION: BF2 0x826f50
extern "C" unsigned long SBRefStrHash(const char* key);
extern "C" void* TableLookup(unsigned long hash, void* entry);
extern "C" void TableRemove(unsigned long hash, void* entry);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct SBServerStr {
    const char* str;
    int refcount;
};

extern "C" void SBReleaseStr(const char* key, const char* str)
{
    SBServerStr* val;
    SBServerStr lookup;

    lookup.str = str;
    val = (SBServerStr*)TableLookup(SBRefStrHash(key), &lookup);
    if (val == 0)
        __assert_fail("val != ((void *)0)", "External/GameSpy/serverbrowsing/sb_serverlist.c", 318, "SBReleaseStr");
    if (--val->refcount == 0)
        TableRemove(SBRefStrHash(key), &lookup);
}
