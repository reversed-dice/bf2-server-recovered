// FUNCTION: BF2 0x5ff9a0
extern "C" int release_5ff9a0(char* self) {
    int n = *(int*)(self + 400) - 1;
    *(int*)(self + 400) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SpawnObjectFireComp_release (0x5ff9a0)
