// FUNCTION: BF2 0x675090
extern "C" int release_675090(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x70))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_PlayerStatsManager_release (0x675090)
