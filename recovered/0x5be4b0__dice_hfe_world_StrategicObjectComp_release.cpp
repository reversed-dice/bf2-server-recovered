// FUNCTION: BF2 0x5be4b0
extern "C" int release_5be4b0(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xf0))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectComp_release (0x5be4b0)
