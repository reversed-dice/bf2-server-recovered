// FUNCTION: BF2 0x697d30
extern "C" int release_697d30(char* self) {
    int n = *(int*)(self + 8) - 1;
    *(int*)(self + 8) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x240))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_ObjectManager_release (0x697d30)
