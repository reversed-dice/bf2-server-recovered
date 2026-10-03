// FUNCTION: BF2 0x5ecdc0
extern "C" int release_5ecdc0(char* self) {
    int n = *(int*)(self + 136) - 1;
    *(int*)(self + 136) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultAmmoComp_release (0x5ecdc0)
