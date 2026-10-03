// FUNCTION: BF2 0x5bb840
extern "C" int release_5bb840(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x90))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_AbilityHudCompTemplate_release (0x5bb840)
