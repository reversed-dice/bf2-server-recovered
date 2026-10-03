// FUNCTION: BF2 0x6f8cd0
extern "C" int release_6f8cd0(char* self) {
    int n = *(int*)(self + 0x1c) - 1;
    *(int*)(self + 0x1c) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_StaticResponsePhysics_release (0x6f8cd0)
