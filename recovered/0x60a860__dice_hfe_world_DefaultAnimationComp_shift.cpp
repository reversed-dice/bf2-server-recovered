// FUNCTION: BF2 0x60a860
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1i)(void*, int);
void fn_0x60a860(void* self) {
    void* m = *(void**)((char*)self+0x28);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1i)vt[0x68/8])(m, 0x20);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationComp_shift (0x60a860)
