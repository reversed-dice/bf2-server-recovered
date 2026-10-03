// FUNCTION: BF2 0x5ed050
namespace dice { namespace hfe { namespace world {
int cb_5ed050(void* self) {
    void* a = *(void**)((char*)self + 0x28);
    if (*(int*)((char*)a + 0x0) == -1)
        return 1;
    char* b = *(char**)((char*)self + 0xb0);
    int n = *(int*)((char*)b + 0x3c);
    int m = (int)(*(double*)0x00b27148 / (double)*(float*)((char*)b + 0x6c)) + 1;
    if (n <= m)
        return n;
    return m;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoComp_getMaxNrOfMags_const (0x5ed050)
