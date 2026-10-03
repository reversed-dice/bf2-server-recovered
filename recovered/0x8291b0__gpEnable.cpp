// FUNCTION: BF2 0x8291b0
namespace dice {
extern int gpiEnable_0x82d0f0(void* a, int v);
int fn_0x8291b0(void* a, int v) {
    if (!a || !*(void**)a)
        return 2;
    return gpiEnable_0x82d0f0(a, v);
}
}
