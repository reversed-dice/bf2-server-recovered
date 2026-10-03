// FUNCTION: BF2 0x5cfed0
extern "C" int release_5cfed0(char* self) {
    int n = *(int*)(self + 112) - 1;
    *(int*)(self + 112) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_GenericProjectileNetworkable_release (0x5cfed0)
