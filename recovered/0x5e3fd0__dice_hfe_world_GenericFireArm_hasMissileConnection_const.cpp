// FUNCTION: BF2 0x5e3fd0
extern "C" bool f_5e3fd0(char* self) {
    char* p = *(char**)(self + 0x2c0);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x188))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_hasMissileConnection_const (0x5e3fd0)
