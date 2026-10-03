// FUNCTION: BF2 0x78f8a0
extern "C" int release_78f8a0(char* self) {
    int n = *(int*)(self + 112) - 1;
    *(int*)(self + 112) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectSecondaryReal_release (0x78f8a0)
