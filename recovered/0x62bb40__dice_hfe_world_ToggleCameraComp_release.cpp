// FUNCTION: BF2 0x62bb40
extern "C" int release_62bb40(char* self) {
    int n = *(int*)(self + 48) - 1;
    *(int*)(self + 48) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ToggleCameraComp_release (0x62bb40)
