// FUNCTION: BF2 0x5c87f0
extern "C" int release_5c87f0(char* self) {
    int n = *(int*)(self + 112) - 1;
    *(int*)(self + 112) = n;
    if (n != 0) return n;
    if (self != 0) (*(void (**)(void*))(*(char**)self + 0x28))(self);
    return n;
}
// REVERSED_FUNCTION: dice_hfe_DestroyableObjectNetworkable_release (0x5c87f0)
