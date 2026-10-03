// FUNCTION: BF2 0x7e4720
extern "C" int release_7e4720(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x178))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_FileManager_release (0x7e4720)
