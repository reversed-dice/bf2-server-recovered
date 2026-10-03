// FUNCTION: BF2 0x5fe590
extern "C" int release_5fe590(char* self) {
    int n = *(int*)(self + 352) - 1;
    *(int*)(self + 352) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SingleFireComp_release (0x5fe590)
