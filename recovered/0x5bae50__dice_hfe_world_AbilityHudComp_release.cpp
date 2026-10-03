// FUNCTION: BF2 0x5bae50
extern "C" int release_5bae50(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xd0))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_AbilityHudComp_release (0x5bae50)
