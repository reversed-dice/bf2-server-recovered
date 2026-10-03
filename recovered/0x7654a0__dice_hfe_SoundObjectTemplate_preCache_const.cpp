// FUNCTION: BF2 0x7654a0
typedef void (*vf_precache_t)(void*);
extern "C" void fn_0x7654a0(void* self) {
    vf_precache_t f = (*(vf_precache_t**)self)[0x1d0/8];
    f(self);
}
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_preCache_const (0x7654a0)
