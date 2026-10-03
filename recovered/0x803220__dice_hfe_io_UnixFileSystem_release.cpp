// FUNCTION: BF2 0x803220
extern "C" int release_803220(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xa8))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_UnixFileSystem_release (0x803220)
