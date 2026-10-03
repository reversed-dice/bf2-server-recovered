// FUNCTION: BF2 0x5e4210
extern "C" bool f_5e4210(char* self) {
    char* p = *(char**)(self + 0x2a8);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x128))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getNoisy_const (0x5e4210)
