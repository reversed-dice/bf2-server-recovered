// FUNCTION: BF2 0x64b310
extern "C" int release_64b310(char* self) {
    int n = *(int*)(self + 40) - 1;
    *(int*)(self + 40) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x50))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_GSServerSideNameValidation_release (0x64b310)
