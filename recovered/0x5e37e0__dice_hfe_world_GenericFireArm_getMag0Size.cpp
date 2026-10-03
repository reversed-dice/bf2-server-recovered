// FUNCTION: BF2 0x5e37e0
extern "C" void* f_5e37e0(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x1b0))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getMag0Size (0x5e37e0)
