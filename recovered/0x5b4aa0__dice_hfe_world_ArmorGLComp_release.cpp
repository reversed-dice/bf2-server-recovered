// FUNCTION: BF2 0x5b4aa0
extern "C" int release_5b4aa0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x248))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_release (0x5b4aa0)
