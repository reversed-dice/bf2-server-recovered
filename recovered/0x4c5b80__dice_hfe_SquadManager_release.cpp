// FUNCTION: BF2 0x4c5b80
extern "C" int release_4c5b80(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x138))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_SquadManager_release (0x4c5b80)
