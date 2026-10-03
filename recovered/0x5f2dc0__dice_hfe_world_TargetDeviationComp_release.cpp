// FUNCTION: BF2 0x5f2dc0
extern "C" int release_5f2dc0(char* self) {
    int n = *(int*)(self + 72) - 1;
    *(int*)(self + 72) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_TargetDeviationComp_release (0x5f2dc0)
