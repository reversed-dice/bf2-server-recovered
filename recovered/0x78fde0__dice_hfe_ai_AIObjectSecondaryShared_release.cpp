// FUNCTION: BF2 0x78fde0
extern "C" int release_78fde0(char* self) {
    int n = *(int*)(self + 104) - 1;
    *(int*)(self + 104) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectSecondaryShared_release (0x78fde0)
