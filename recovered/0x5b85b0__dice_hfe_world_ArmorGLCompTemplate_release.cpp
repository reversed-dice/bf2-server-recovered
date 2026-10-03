// FUNCTION: BF2 0x5b85b0
extern "C" int release_5b85b0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x2d8))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_release (0x5b85b0)
