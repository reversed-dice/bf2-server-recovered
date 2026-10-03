// FUNCTION: BF2 0x5f31c0
namespace dice { namespace hfe { namespace world {
typedef void (*vf_disable_t)(void*);
void fn_0x5f31c0(void* self) {
    vf_disable_t f = (*(vf_disable_t**)self)[0x130/8];
    f(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireComp_disable (0x5f31c0)
