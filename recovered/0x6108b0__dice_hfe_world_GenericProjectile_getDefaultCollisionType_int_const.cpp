// FUNCTION: BF2 0x6108b0
extern "C" void* f_6108b0(char* self) {
    char* p = *(char**)(self + 0x260);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x60))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getDefaultCollisionType_int_const (0x6108b0)
