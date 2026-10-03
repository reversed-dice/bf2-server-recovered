// FUNCTION: BF2 0x610880
extern "C" bool f_610880(char* self) {
    char* p = *(char**)(self + 0x260);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x88))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_hasCollisionEffect_const (0x610880)
