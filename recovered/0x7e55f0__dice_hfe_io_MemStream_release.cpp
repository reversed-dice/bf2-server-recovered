// FUNCTION: BF2 0x7e55f0
extern "C" int release_7e55f0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xa8))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_MemStream_release (0x7e55f0)
