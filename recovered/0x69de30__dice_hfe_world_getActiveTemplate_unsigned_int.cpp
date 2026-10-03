// FUNCTION: BF2 0x69de30
namespace dice { namespace hfe { namespace world {
extern void* g_mgr_0x112ee40;
typedef void* (*VFn0)(void*);
typedef void* (*VFnIdx)(void*, unsigned int);
void* getActiveTemplate_0x69de30(unsigned int idx) {
    void* mgr = g_mgr_0x112ee40;
    void** vtbl = *(void***)mgr;
    VFn0 fn0 = (VFn0)((char*)vtbl + 0xa0);
    void* result = ((VFn0)*(void**)((char*)vtbl + 0xa0))(mgr);
    if (!result) return 0;
    void** vtbl2 = *(void***)result;
    VFnIdx fn1 = (VFnIdx)*(void**)((char*)vtbl2 + 0xa0);
    (void)fn0;
    return fn1(result, idx);
}
} } }
