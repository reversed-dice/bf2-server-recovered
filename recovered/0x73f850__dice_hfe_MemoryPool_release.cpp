// FUNCTION: BF2 0x73f850
extern "C" int release_73f850(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x50))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_MemoryPool_release (0x73f850)
