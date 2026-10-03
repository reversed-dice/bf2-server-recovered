// FUNCTION: BF2 0x609cb0
extern "C" int release_609cb0(char* self) {
    int n = *(int*)(self + 40) - 1;
    *(int*)(self + 40) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_release (0x609cb0)
