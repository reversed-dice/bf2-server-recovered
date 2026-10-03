// FUNCTION: BF2 0x5c5c30
extern "C" int release_5c5c30(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x278))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_release (0x5c5c30)
