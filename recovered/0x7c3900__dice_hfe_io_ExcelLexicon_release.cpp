// FUNCTION: BF2 0x7c3900
extern "C" int release_7c3900(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x38))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_ExcelLexicon_release (0x7c3900)
