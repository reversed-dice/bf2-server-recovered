// FUNCTION: BF2 0x4b7bf0
extern "C" int release_4b7bf0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x120))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_MaterialManager_release (0x4b7bf0)
