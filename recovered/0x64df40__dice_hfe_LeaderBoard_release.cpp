// FUNCTION: BF2 0x64df40
extern "C" int release_64df40(char* self) {
    int n = *(int*)(self + 40) - 1;
    *(int*)(self + 40) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x48))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_LeaderBoard_release (0x64df40)
