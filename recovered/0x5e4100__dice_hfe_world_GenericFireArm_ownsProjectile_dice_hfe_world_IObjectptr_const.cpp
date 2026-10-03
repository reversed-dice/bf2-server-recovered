// FUNCTION: BF2 0x5e4100
extern "C" bool f_5e4100(char* self) {
    char* p = *(char**)(self + 0x290);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x1f0))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_ownsProjectile_dice_hfe_world_IObjectptr_const (0x5e4100)
