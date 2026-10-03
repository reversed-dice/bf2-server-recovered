// FUNCTION: BF2 0x787130
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);

extern "C" unsigned int g_iid_pco_787130;
extern "C" unsigned int g_iid_obj_787130;

extern "C" void* getOccupiedObject_787130(void* self)
{
    ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x40/8])(*(void**)((char*)self + 8));
    void* p2 = ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x40/8])(*(void**)((char*)self + 8));
    void* cur = *(void**)((char*)p2 + 0x50);
    void* q;
    for (; cur; cur = *(void**)((char*)cur + 0x50)) {
        q = ((vfn2)(*(void***)cur)[0x18/8])(cur, g_iid_pco_787130);
        if (q) {
            goto found;
        }
    }
    q = 0;
found:
    if (q) {
        void* r = ((vfn2)(*(void***)q)[0x18/8])(q, g_iid_obj_787130);
        if (r) {
            return *(void**)((char*)r + 0x68);
        }
    }
    return 0;
}
