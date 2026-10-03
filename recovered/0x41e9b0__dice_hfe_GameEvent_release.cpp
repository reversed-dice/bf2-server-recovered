// FUNCTION: BF2 0x41e9b0
extern "C" int release_41e9b0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_GameEvent_release (0x41e9b0)
