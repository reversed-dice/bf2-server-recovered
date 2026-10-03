// FUNCTION: BF2 0x610230
extern "C" bool f_610230(char* self) {
    char* p = *(char**)(self + 0x268);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x70))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_hasExplosion_const (0x610230)
