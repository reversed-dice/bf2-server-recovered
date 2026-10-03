// FUNCTION: BF2 0x78c420
typedef void* (*vfn1)(void*, unsigned int);
typedef int (*vfn2)(void*);

extern "C" unsigned int g_cid_78c420;

extern "C" int getSoldierPose_78c420(void* self)
{
    void* p = *(void**)((char*)self + 0x20);
    if (((vfn1)(*(void***)*(void**)((char*)p + 0x28))[0xa0/8])(*(void**)((char*)p + 0x28), g_cid_78c420)) {
        int v = ((vfn2)(*(void***)p)[0x4f0/8])(p);
        switch (v) {
        case 1:
            return 2;
        case 2:
            return 3;
        case 3:
            return 4;
        case 0:
            return 1;
        default:
            return 0;
        }
    }
    return 0;
}
