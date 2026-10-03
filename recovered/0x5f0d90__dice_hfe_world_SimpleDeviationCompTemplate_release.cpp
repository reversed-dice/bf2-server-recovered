// FUNCTION: BF2 0x5f0d90
extern "C" int release_5f0d90(char* self) {
    int n = *(int*)(self + 0x24) - 1;
    *(int*)(self + 0x24) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x68))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleDeviationCompTemplate_release (0x5f0d90)
