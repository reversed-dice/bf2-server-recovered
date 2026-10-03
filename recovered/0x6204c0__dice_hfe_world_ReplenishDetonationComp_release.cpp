// FUNCTION: BF2 0x6204c0
extern "C" int release_6204c0(char* self) {
    int n = *(int*)(self + 88) - 1;
    *(int*)(self + 88) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ReplenishDetonationComp_release (0x6204c0)
