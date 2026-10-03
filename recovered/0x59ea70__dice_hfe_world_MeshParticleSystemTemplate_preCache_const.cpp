// FUNCTION: BF2 0x59ea70
namespace dice { namespace hfe { namespace world {
typedef int (*vfn_90)(void*);
extern void fn_69f2a0(void* self);
void cb_59ea70(void* self) {
    if (((*(vfn_90*)((char*)*(void**)self + 0x90))(self) & 0x20) == 0)
        fn_69f2a0(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_MeshParticleSystemTemplate_preCache_const (0x59ea70)
