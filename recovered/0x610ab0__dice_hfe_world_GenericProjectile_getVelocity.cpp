// FUNCTION: BF2 0x610ab0
extern "C" void* f_610ab0(char* self) {
    char* p = *(char**)(self + 0x88);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0xc0))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getVelocity (0x610ab0)
