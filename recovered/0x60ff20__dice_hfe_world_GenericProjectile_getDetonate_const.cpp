// FUNCTION: BF2 0x60ff20
extern "C" bool f_60ff20(char* self) {
    char* p = *(char**)(self + 0x268);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x58))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getDetonate_const (0x60ff20)
