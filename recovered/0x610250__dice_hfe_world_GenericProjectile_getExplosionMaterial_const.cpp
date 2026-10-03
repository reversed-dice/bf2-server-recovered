// FUNCTION: BF2 0x610250
extern "C" void* f_610250(char* self) {
    char* p = *(char**)(self + 0x268);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x78))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getExplosionMaterial_const (0x610250)
