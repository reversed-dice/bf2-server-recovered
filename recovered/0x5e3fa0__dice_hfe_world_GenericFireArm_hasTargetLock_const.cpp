// FUNCTION: BF2 0x5e3fa0
extern "C" bool f_5e3fa0(char* self) {
    char* p = *(char**)(self + 0x2c0);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x140))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_hasTargetLock_const (0x5e3fa0)
