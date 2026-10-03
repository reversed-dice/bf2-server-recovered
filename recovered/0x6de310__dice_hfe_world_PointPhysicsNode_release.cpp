// FUNCTION: BF2 0x6de310
extern "C" int release_6de310(char* self) {
    int n = *(int*)(self + 40) - 1;
    *(int*)(self + 40) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_release (0x6de310)
