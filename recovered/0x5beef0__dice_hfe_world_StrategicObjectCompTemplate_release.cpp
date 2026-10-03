// FUNCTION: BF2 0x5beef0
extern "C" int release_5beef0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xd8))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_release (0x5beef0)
