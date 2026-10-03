// FUNCTION: BF2 0x4bfd80
extern "C" int release_4bfd80(char* self) {
    int n = *(int*)(self + 96) - 1;
    *(int*)(self + 96) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x138))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_release (0x4bfd80)
