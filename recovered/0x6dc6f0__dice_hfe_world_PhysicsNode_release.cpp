// FUNCTION: BF2 0x6dc6f0
extern "C" int release_6dc6f0(char* self) {
    int n = *(int*)(self + 0x9c) - 1;
    *(int*)(self + 0x9c) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_release (0x6dc6f0)
