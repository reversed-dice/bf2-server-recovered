// FUNCTION: BF2 0x5e3d60
extern "C" void* f_5e3d60(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return 0;
    return (*(void* (**)(void*))(*(char**)p + 0x1a8))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getCurrentNrOfMags_const (0x5e3d60)
