// FUNCTION: BF2 0x637d00
extern "C" int release_637d00(char* self) {
    int n = *(int*)(self + 0x244) - 1;
    *(int*)(self + 0x244) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_PhysicsFloatingBundle_release (0x637d00)
