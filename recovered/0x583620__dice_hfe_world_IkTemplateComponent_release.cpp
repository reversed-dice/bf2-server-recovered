// FUNCTION: BF2 0x583620
extern "C" int release_583620(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0xd0))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_IkTemplateComponent_release (0x583620)
