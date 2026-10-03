// FUNCTION: BF2 0x52e180
typedef int (*vfn1)(void*);

extern "C" unsigned int g_cid_52e180;

extern "C" void* getSoldier_52e180(void* self)
{
    if (*(void**)((char*)self + 0x50)) {
        void* t0 = *(void**)((char*)*(void**)((char*)self + 0x50) + 0x28);
        int r0 = ((vfn1)(*(void***)t0)[0x20/8])(t0);
        int cid = g_cid_52e180;
        if (r0 == cid) {
            return *(void**)((char*)self + 0x50);
        }
        if (*(void**)((char*)*(void**)((char*)self + 0x50) + 0x50)) {
            void* t1 = *(void**)((char*)*(void**)((char*)*(void**)((char*)self + 0x50) + 0x50) + 0x28);
            if (((vfn1)(*(void***)t1)[0x20/8])(t1) == cid) {
                return *(void**)((char*)*(void**)((char*)self + 0x50) + 0x50);
            }
        }
    }
    return 0;
}
