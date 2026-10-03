// FUNCTION: BF2 0x5ed1e0
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);
typedef void* (*vfn3)(void*, int);

extern "C" unsigned int g_iid_pco_5ed1e0;
extern "C" unsigned int g_iid_weapon_5ed1e0;

extern "C" long getPrimWeapon_5ed1e0(void* self)
{
    void* p = ((vfn1)(*(void***)self)[0x90/8])(self);
    void* q;
    while (true) {
        if (p == 0) {
            return 0;
        }
        q = ((vfn2)(*(void***)p)[0x18/8])(p, g_iid_pco_5ed1e0);
        if (q) {
            break;
        }
        p = *(void**)((char*)p + 0x50);
    }
    void* w = ((vfn3)(*(void***)q)[0xe0/8])(q, 0);
    if (w) {
        void* r = ((vfn2)(*(void***)w)[0x18/8])(w, g_iid_weapon_5ed1e0);
        if (r) {
            return (long)r;
        }
    }
    return 0;
}
