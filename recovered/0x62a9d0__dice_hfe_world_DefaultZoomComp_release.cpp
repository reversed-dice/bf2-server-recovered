// FUNCTION: BF2 0x62a9d0
extern "C" int release_62a9d0(char* self) {
    int n = *(int*)(self + 48) - 1;
    *(int*)(self + 48) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomComp_release (0x62a9d0)
