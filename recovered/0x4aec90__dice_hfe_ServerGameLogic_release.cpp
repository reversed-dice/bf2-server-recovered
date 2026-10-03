// FUNCTION: BF2 0x4aec90
extern "C" int release_4aec90(char* self) {
    int n = *(int*)(self + 0x48c) - 1;
    *(int*)(self + 0x48c) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x590))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_release (0x4aec90)
