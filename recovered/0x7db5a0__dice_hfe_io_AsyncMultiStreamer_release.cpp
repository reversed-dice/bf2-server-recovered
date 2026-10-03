// FUNCTION: BF2 0x7db5a0
extern "C" int release_7db5a0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x40))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStreamer_release (0x7db5a0)
