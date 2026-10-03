// FUNCTION: BF2 0x5e3bc0
extern "C" void* f_5e3bc0(char* self) {
    char* p = *(char**)(self + 0x290);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x1b8))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getFireRate (0x5e3bc0)
