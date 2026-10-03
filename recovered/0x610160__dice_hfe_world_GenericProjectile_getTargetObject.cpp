// FUNCTION: BF2 0x610160
extern "C" void* f_610160(char* self) {
    char* p = *(char**)(self + 0x270);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x50))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getTargetObject (0x610160)
