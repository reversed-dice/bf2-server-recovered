// FUNCTION: BF2 0x5c2340
extern "C" int release_5c2340(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 600))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_release (0x5c2340)
