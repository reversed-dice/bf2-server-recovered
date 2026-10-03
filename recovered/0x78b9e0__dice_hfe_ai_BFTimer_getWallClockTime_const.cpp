// FUNCTION: BF2 0x78b9e0
extern "C" char* dice_hfe_g_system;
extern "C" void f_78b9e0() {
    char* p = dice_hfe_g_system;
    (*(void (**)(void*))(*(char**)p + 0x38))(p);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFTimer_getWallClockTime_const (0x78b9e0)
