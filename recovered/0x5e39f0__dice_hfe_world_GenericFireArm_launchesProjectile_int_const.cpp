// FUNCTION: BF2 0x5e39f0
extern "C" bool f_5e39f0(char* self) {
    char* p = *(char**)(self + 0x290);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x160))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_launchesProjectile_int_const (0x5e39f0)
