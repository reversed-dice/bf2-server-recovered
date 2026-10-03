// FUNCTION: BF2 0x7a3700
namespace dice { namespace hfe { namespace io {
typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a3700(void* self, bool val) {
    void** vt = *(void***)self;
    unsigned stack;
    *(bool*)&stack = val;
    int r = ((vfn2)vt[0x28/8])(self, &stack, 1);
    return r == 1;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_bool (0x7a3700)
