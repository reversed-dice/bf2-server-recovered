// FUNCTION: BF2 0x601630
extern "C" int release_601630(char* self) {
    int n = *(int*)(self + 352) - 1;
    *(int*)(self + 352) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireComp_release (0x601630)
