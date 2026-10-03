// FUNCTION: BF2 0x656970
extern "C" int release_656970(char* self) {
    int n = *(int*)(self + 40) - 1;
    *(int*)(self + 40) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x58))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_PlayerRankInfo_release (0x656970)
