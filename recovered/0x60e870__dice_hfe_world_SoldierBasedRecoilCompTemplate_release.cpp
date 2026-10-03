// FUNCTION: BF2 0x60e870
extern "C" int release_60e870(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x68))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilCompTemplate_release (0x60e870)
