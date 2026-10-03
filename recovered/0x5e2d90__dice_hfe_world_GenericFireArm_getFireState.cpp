// FUNCTION: BF2 0x5e2d90
extern "C" void* f_5e2d90(char* self) {
    char* p = *(char**)(self + 0x290);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x1b0))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getFireState (0x5e2d90)
