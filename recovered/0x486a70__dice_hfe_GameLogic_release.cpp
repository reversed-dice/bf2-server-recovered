// FUNCTION: BF2 0x486a70
extern "C" int release_486a70(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x590))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_GameLogic_release (0x486a70)
