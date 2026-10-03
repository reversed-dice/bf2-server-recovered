// FUNCTION: BF2 0x6eef70
extern "C" int release_6eef70(char* self) {
    int n = *(int*)(self + 0x9c) - 1;
    *(int*)(self + 0x9c) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_RotationalPointPhysicsNode_release (0x6eef70)
