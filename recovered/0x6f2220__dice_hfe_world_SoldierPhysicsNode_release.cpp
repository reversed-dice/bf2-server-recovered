// FUNCTION: BF2 0x6f2220
extern "C" int release_6f2220(char* self) {
    int n = *(int*)(self + 0x9c) - 1;
    *(int*)(self + 0x9c) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_release (0x6f2220)
