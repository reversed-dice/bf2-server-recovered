// FUNCTION: BF2 0x6f8390
extern "C" int release_6f8390(char* self) {
    int n = *(int*)(self + 176) - 1;
    *(int*)(self + 176) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_release (0x6f8390)
