// FUNCTION: BF2 0x5aecc0
extern "C" int release_5aecc0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xa0))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_AbilityGLCompTemplate_release (0x5aecc0)
