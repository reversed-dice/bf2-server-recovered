// FUNCTION: BF2 0x464c40
extern "C" int release_464c40(char* self) {
    int n = *(int*)(self + 144) - 1;
    *(int*)(self + 144) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_GameServer_release (0x464c40)
