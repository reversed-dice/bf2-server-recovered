// FUNCTION: BF2 0x6f85e0
extern "C" int release_6f85e0(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_StaticPhysicsNode_release (0x6f85e0)
