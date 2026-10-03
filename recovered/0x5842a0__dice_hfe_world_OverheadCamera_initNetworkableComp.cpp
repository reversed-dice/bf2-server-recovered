// FUNCTION: BF2 0x5842a0
extern "C" int strcmp_like(void*, unsigned);
extern "C" void tail_helper_6a36f0(void*, int);
typedef void* (*vfn128)(void*);
void fn_0x5842a0(void* self) {
    void* p = *(void**)((char*)self + 0x28);
    if (p) {
        void* r = ((vfn128)(*(void***)p)[0x128/8])(p);
        int cmp = strcmp_like(r, 0xbb25f1);
        if (cmp != 0) {
            tail_helper_6a36f0(self, *(int*)0x00c75ea4);
        }
    }
}
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_initNetworkableComp (0x5842a0)
