// FUNCTION: BF2 0x584bf0
typedef void (*vf_bool_t)(void*, bool);

namespace dice { namespace hfe { namespace world {
void fn_0x581a70(void* self, bool b) {
    vf_bool_t f = (*(vf_bool_t**)self)[0x340/8];
    f(self, b);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_updateCameraView_bool (0x581a70)
