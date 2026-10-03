// FUNCTION: BF2 0x790720
extern "C" int release_790720(char* self) {
    int n = *(int*)(self + 96) - 1;
    *(int*)(self + 96) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectShared_release (0x790720)
