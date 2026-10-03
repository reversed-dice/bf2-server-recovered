// FUNCTION: BF2 0x7901c0
typedef void* (*vfn1)(void*, unsigned int);
typedef void* (*vfn2)(void*);

extern "C" unsigned int g_iid_7901c0;

extern "C" void* getPlayerControlObjectId_7901c0(void* self)
{
    void* p = *(void**)((char*)self + 0x20);
    void* q;
    while (true) {
        if (p == 0) {
            return 0;
        }
        q = ((vfn1)(*(void***)p)[0x18/8])(p, g_iid_7901c0);
        if (q) {
            break;
        }
        p = *(void**)((char*)p + 0x50);
    }
    return ((vfn2)(*(void***)q)[0x60/8])(q);
}
