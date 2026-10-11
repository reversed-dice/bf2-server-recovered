// FUNCTION: BF2 0x81e790
extern "C" void* gsimalloc(unsigned long size);
extern "C" void gsifree(void* p);
extern "C" unsigned long strlen(const char* s);
extern "C" char* strcpy(char* dst, const char* src);
extern "C" char* strcat(char* dst, const char* src);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct bucketset_s;
typedef bucketset_s* bucketset_t;

struct bucket_t
{
    char* name;
    int type;
    int nvals;
    union { int ival; double fval; char* sval; } vals;
};

extern "C" void* DoSet(bucket_t* pbucket, void* value);
extern "C" void* DoGet(bucket_t* pbucket);
extern "C" bucket_t* DoFind(bucketset_t set, char* name);

void* BucketConcat(bucketset_t set, char* name, void* value)
{
    bucket_t* pbucket = DoFind(set, name);
    char* temp;
    char* s;

    if (!pbucket)
        return 0;

    if (pbucket->type != 2)
        __assert_fail("pbucket->type == bt_string", "External/GameSpy/gstats/gbucket.c", 0xce, "BucketConcat");

    s = (char*)DoGet(pbucket);
    temp = (char*)gsimalloc(strlen(s) + strlen((char*)value) + 1);
    strcpy(temp, s);
    strcat(temp, (char*)value);

    DoSet(pbucket, temp);
    gsifree(temp);

    return DoGet(pbucket);
}
