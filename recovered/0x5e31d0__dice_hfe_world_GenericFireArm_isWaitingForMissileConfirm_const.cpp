// FUNCTION: BF2 0x5e31d0
extern "C" bool f_5e31d0(char* self) {
    char* p = *(char**)(self + 0x290);
    if (p == 0) return false;
    return (*(bool (**)(void*))(*(char**)p + 0x170))(p);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_isWaitingForMissileConfirm_const (0x5e31d0)
