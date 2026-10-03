// FUNCTION: BF2 0x6853d0
extern "C" int release_6853d0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xa0))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_BinTreeCuller_release (0x6853d0)
