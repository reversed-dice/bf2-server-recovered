// FUNCTION: BF2 0x779240
typedef void* (*vfn1)(void*, unsigned int);
typedef int (*vfn2)(void*);

extern "C" unsigned int g_iid_779240;
extern "C" unsigned int g_cid_779240;

extern "C" int predicate_779240(void* self, void* param2)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)param2 + 0x28))[0x18/8])(*(void**)((char*)param2 + 0x28), g_iid_779240);
    if (p) {
        if (((vfn2)(*(void***)p)[0x20/8])(p) == g_cid_779240 && *(unsigned char*)((char*)p + 0x200)) {
            return 1;
        }
    }
    return 0;
}
