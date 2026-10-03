// FUNCTION: BF2 0x62a840
extern "C" int release_62a840(char* self) {
    int n = *(int*)(self + 24) - 1;
    *(int*)(self + 24) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x70))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomCompTemplate_release (0x62a840)
