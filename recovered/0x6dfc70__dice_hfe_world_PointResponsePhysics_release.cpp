// FUNCTION: BF2 0x6dfc70
extern "C" int release_6dfc70(char* self) {
    int n = *(int*)(self + 64) - 1;
    *(int*)(self + 64) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_PointResponsePhysics_release (0x6dfc70)
