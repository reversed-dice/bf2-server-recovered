// FUNCTION: BF2 0x5e37b0
extern "C" void* f_5e37b0(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 400))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getMagSize (0x5e37b0)
