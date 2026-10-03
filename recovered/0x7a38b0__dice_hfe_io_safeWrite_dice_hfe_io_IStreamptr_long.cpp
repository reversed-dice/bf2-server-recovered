// FUNCTION: BF2 0x7a38b0
namespace dice { namespace hfe { namespace io {
typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a38b0(void* self, long val) {
    void** vt = *(void***)self;
    long stack = val;
    int r = ((vfn2)vt[0x28/8])(self, &stack, 8);
    return r == 8;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_long (0x7a38b0)
