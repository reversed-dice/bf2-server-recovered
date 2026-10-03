// FUNCTION: BF2 0x5fc100
extern "C" int release_5fc100(char* self) {
    int n = *(int*)(self + 0x8c) - 1;
    *(int*)(self + 0x8c) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x68))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_MultiFireCompTemplate_release (0x5fc100)
