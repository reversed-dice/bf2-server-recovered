// FUNCTION: BF2 0x67b4f0
extern "C" int release_67b4f0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xb0))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_ModInfo_release (0x67b4f0)
