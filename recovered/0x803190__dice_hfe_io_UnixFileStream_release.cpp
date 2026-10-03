// FUNCTION: BF2 0x803190
extern "C" int release_803190(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x80))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_UnixFileStream_release (0x803190)
