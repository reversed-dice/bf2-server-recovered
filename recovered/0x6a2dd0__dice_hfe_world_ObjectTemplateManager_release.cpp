// FUNCTION: BF2 0x6a2dd0
extern "C" int release_6a2dd0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x118))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectTemplateManager_release (0x6a2dd0)
