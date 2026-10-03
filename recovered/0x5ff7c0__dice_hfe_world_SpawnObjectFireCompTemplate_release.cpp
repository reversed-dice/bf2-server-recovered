// FUNCTION: BF2 0x5ff7c0
extern "C" int release_5ff7c0(char* self) {
    int n = *(int*)(self + 0xb4) - 1;
    *(int*)(self + 0xb4) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x68))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SpawnObjectFireCompTemplate_release (0x5ff7c0)
