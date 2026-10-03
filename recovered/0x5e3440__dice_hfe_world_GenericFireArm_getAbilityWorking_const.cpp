// FUNCTION: BF2 0x5e3440
extern "C" bool f_5e3440(char* self) {
    char* p = *(char**)(self + 0x2b0);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x48))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getAbilityWorking_const (0x5e3440)
