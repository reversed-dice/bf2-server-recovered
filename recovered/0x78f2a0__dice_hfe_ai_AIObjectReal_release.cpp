// FUNCTION: BF2 0x78f2a0
extern "C" int release_78f2a0(char* self) {
    int n = *(int*)(self + 96) - 1;
    *(int*)(self + 96) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectReal_release (0x78f2a0)
