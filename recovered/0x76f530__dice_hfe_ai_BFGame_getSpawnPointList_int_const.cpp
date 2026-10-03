// FUNCTION: BF2 0x76f530
extern "C" char* dice_hfe_spawnManager;
extern "C" void f_76f530() {
    char* p = dice_hfe_spawnManager;
    (*(void (**)(void*))(*(char**)p + 0x58))(p);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFGame_getSpawnPointList_int_const (0x76f530)
