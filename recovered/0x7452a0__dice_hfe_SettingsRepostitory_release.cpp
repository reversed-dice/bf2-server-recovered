// FUNCTION: BF2 0x7452a0
extern "C" int release_7452a0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x108))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_SettingsRepostitory_release (0x7452a0)
