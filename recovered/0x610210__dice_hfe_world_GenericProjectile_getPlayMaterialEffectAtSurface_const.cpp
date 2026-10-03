// FUNCTION: BF2 0x610210
extern "C" bool f_610210(char* self) {
    char* p = *(char**)(self + 0x268);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x68))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getPlayMaterialEffectAtSurface_const (0x610210)
