// FUNCTION: BF2 0x60b260
extern "C" int release_60b260(char* self) {
    int n = *(int*)(self + 56) - 1;
    *(int*)(self + 56) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationComp_release (0x60b260)
