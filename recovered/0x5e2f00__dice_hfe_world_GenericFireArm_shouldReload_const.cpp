// FUNCTION: BF2 0x5e2f00
extern "C" bool f_5e2f00(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x128))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_shouldReload_const (0x5e2f00)
