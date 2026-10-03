// FUNCTION: BF2 0x716a00
extern "C" int release_716a00(char* self) {
    int n = *(int*)(self + 16) - 1;
    *(int*)(self + 16) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_CollisionManager_release (0x716a00)
