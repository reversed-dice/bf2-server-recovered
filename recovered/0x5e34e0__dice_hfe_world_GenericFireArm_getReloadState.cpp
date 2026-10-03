// FUNCTION: BF2 0x5e34e0
extern "C" void* f_5e34e0(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x188))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getReloadState (0x5e34e0)
