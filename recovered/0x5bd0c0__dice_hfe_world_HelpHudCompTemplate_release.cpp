// FUNCTION: BF2 0x5bd0c0
extern "C" int release_5bd0c0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x150))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_HelpHudCompTemplate_release (0x5bd0c0)
