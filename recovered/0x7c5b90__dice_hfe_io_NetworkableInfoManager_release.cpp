// FUNCTION: BF2 0x7c5b90
extern "C" int release_7c5b90(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x88))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_NetworkableInfoManager_release (0x7c5b90)
