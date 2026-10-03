// FUNCTION: BF2 0x6a6020
extern "C" int release_6a6020(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x40))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_PortalPassing_release (0x6a6020)
