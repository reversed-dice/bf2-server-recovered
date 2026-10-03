// FUNCTION: BF2 0x5e40a0
extern "C" void* f_5e40a0(char* self) {
    char* p = *(char**)(self + 0x2a0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x130))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getPrevCameraId_const (0x5e40a0)
