// FUNCTION: BF2 0x5e2f60
namespace dice { namespace hfe { namespace world {
typedef void (*vf_state_t)(void*, unsigned int);
void fn_0x5e2f60(void* self, unsigned int state) {
    void* p = *(void**)((char*)self+0x290);
    if (!p) return;
    vf_state_t f = (*(vf_state_t**)p)[0x140/8];
    f(p, state);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setWeaponState_unsigned_int (0x5e2f60)
