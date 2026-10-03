// FUNCTION: BF2 0x578840
typedef void* (*vfn1)(void*, unsigned int);
typedef int (*vfn2)(void*);

extern "C" unsigned int g_iid_578840;

extern "C" int getPcoId_578840(void* self)
{
    int cache = *(int*)((char*)self + 0x304);
    if (cache == -1) {
        void* cur = self;
        void* q = 0;
        while (cur) {
            q = ((vfn1)(*(void***)cur)[0x18/8])(cur, g_iid_578840);
            if (q) {
                break;
            }
            cur = *(void**)((char*)cur + 0x50);
        }
        if (q) {
            int r = ((vfn2)(*(void***)q)[0x60/8])(q);
            *(int*)((char*)self + 0x304) = r;
            return r;
        }
        *(int*)((char*)self + 0x304) = 0;
        return 0;
    }
    return cache;
}
