// FUNCTION: BF2 0x608350
extern "C" int release_608350(char* self) {
    int n = *(int*)(self + 128) - 1;
    *(int*)(self + 128) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x78))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SimpleTargetComp_release (0x608350)
