// FUNCTION: BF2 0x5e3c80
extern "C" void* f_5e3c80(char* self) {
    char* p = *(char**)(self + 0x2a0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x140))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getZoom (0x5e3c80)
