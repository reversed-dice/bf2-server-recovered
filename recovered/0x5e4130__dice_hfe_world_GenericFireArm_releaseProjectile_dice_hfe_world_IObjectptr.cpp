// FUNCTION: BF2 0x5e4130
extern "C" bool f_5e4130(char* self) {
    char* p = *(char**)(self + 0x290);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x1f8))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_releaseProjectile_dice_hfe_world_IObjectptr (0x5e4130)
