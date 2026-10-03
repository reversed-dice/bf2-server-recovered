// FUNCTION: BF2 0x7f2ce0
extern "C" int release_7f2ce0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x90))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_io_ControlMapManager_release (0x7f2ce0)
