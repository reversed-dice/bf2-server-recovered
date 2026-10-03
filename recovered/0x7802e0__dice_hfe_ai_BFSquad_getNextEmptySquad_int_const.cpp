// FUNCTION: BF2 0x7802e0
extern "C" char* dice_hfe_squadManager;
extern "C" void f_7802e0() {
    char* p = dice_hfe_squadManager;
    (*(void (**)(void*))(*(char**)p + 0x80))(p);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFSquad_getNextEmptySquad_int_const (0x7802e0)
