// FUNCTION: BF2 0x5e3350
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1i)(void*, int);
void fn_0x5e3350(void* self, unsigned flags) {
    void* m = *(void**)((char*)self+0x2c0);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1i)vt[0x118/8])(m, (flags & 2) >> 1);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setAsyncFlags_unsigned_int (0x5e3350)
