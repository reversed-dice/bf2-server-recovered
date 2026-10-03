// FUNCTION: BF2 0x55f2c0
namespace dice { namespace hfe { namespace world {
extern void fn_574860(void* self);
typedef void* (*vfn_1a0)(void*, void*, int, float);
extern void* g_0112ee48;
void* cb_55f2c0(void* self) {
    fn_574860(self);
    void* g = g_0112ee48;
    return (*(vfn_1a0*)((char*)*(void**)g + 0x1a0))(g, self, 0x1d, 0.0f);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetObject_init (0x55f2c0)
