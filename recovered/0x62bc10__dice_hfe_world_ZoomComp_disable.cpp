// FUNCTION: BF2 0x62bc10
namespace dice { namespace hfe { namespace world {
typedef void (*vf_t)(void*);
void fn_0x62bc10(void* self) {
    vf_t f = (*(vf_t**)self)[0x130/8];
    f(self);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZoomComp_disable (0x62bc10)
