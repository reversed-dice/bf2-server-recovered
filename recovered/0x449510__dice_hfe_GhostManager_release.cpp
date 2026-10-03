// FUNCTION: BF2 0x449510
extern "C" int release_449510(char* self) {
    int n = *(int*)(self + 24) - 1;
    *(int*)(self + 24) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x68))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_GhostManager_release (0x449510)
