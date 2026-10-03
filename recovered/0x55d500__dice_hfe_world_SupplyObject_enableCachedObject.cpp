// FUNCTION: BF2 0x55d500
namespace dice { namespace hfe { namespace world {
extern void fn_55d2e0(void* self);
extern void fn_5741c0(void* self);
typedef void* (*vfn_1a0)(void*, void*, int, float);
extern void* g_0112ee48;
void* cb_55d500(void* self) {
    fn_55d2e0(self);
    fn_5741c0(self);
    void* g = g_0112ee48;
    return (*(vfn_1a0*)((char*)*(void**)g + 0x1a0))(g, self, 0x1d, *(float*)0x00b2f3bc);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyObject_enableCachedObject (0x55d500)
