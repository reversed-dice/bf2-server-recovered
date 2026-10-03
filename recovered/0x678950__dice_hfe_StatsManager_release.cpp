// FUNCTION: BF2 0x678950
extern "C" int release_678950(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x80))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_StatsManager_release (0x678950)
