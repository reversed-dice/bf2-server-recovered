// FUNCTION: BF2 0x610100
namespace dice { namespace hfe { namespace world {
extern bool fn_6100e0(void* self);
extern float fn_68ad10(void* self);
float cb_610100(void* self) {
    if (fn_6100e0(self) && *(char*)((char*)self + 0x2c4) != 0)
        return *(float*)((char*)*(void**)((char*)self + 0x258) + 0x228);
    return fn_68ad10(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getVisualBoundingRadius_const (0x610100)
