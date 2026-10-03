// FUNCTION: BF2 0x60bad0
extern "C" int release_60bad0(char* self) {
    int n = *(int*)(self + 56) - 1;
    *(int*)(self + 56) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ThrownAnimationComp_release (0x60bad0)
