// FUNCTION: BF2 0x7905d0
typedef void* (*vfn1)(void*, unsigned int);
typedef void (*vfn2)(void*);

extern "C" unsigned int g_iid_7905d0;

extern "C" void releaseObjectFromSpawner_7905d0(void* self)
{
    void* p = *(void**)((char*)self + 0x20);
    void* q;
    for (; p; p = *(void**)((char*)p + 0x50)) {
        q = ((vfn1)(*(void***)p)[0x18/8])(p, g_iid_7905d0);
        if (q) {
            goto found;
        }
    }
    q = 0;
found:
    ((vfn2)(*(void***)q)[0x178/8])(q);
}
