// FUNCTION: BF2 0x5bdef0
extern "C" int release_5bdef0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xa0))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_release (0x5bdef0)
