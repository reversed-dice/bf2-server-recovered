// FUNCTION: BF2 0x7340c0
namespace dice { namespace hfe {
extern "C" int __cxa_guard_acquire(char*);
extern "C" void __cxa_guard_release(char*);
extern "C" char guard_variable_for_dice_hfe_Vec3_getZero_vec3zero;
extern "C" float dice_hfe_Vec3_getZero_vec3zero[3];

extern "C" float* dice_hfe_Vec3_getZero() {
    if (!guard_variable_for_dice_hfe_Vec3_getZero_vec3zero) {
        if (__cxa_guard_acquire(&guard_variable_for_dice_hfe_Vec3_getZero_vec3zero)) {
            dice_hfe_Vec3_getZero_vec3zero[0] = 0.0f;
            dice_hfe_Vec3_getZero_vec3zero[1] = 0.0f;
            dice_hfe_Vec3_getZero_vec3zero[2] = 0.0f;
            __cxa_guard_release(&guard_variable_for_dice_hfe_Vec3_getZero_vec3zero);
            return dice_hfe_Vec3_getZero_vec3zero;
        }
    }
    return dice_hfe_Vec3_getZero_vec3zero;
}
} }
