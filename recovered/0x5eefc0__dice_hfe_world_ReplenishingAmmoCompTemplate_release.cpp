// FUNCTION: BF2 0x5eefc0
extern "C" int release_5eefc0(char* self) {
    int n = *(int*)(self + 88) - 1;
    *(int*)(self + 88) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x70))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoCompTemplate_release (0x5eefc0)
