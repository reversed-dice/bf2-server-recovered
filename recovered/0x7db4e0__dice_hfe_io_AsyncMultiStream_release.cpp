// FUNCTION: BF2 0x7db4e0
extern "C" int release_7db4e0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x68))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStream_release (0x7db4e0)
