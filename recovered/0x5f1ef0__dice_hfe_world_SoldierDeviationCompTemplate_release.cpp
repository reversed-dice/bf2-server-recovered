// FUNCTION: BF2 0x5f1ef0
extern "C" int release_5f1ef0(char* self) {
    int n = *(int*)(self + 0x24) - 1;
    *(int*)(self + 0x24) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x68))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationCompTemplate_release (0x5f1ef0)
