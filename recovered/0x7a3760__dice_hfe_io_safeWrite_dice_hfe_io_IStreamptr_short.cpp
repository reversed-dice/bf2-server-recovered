// FUNCTION: BF2 0x7a3760
namespace dice { namespace hfe { namespace io {
typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a3760(void* self, short val) {
    void** vt = *(void***)self;
    unsigned stack;
    *(short*)&stack = val;
    int r = ((vfn2)vt[0x28/8])(self, &stack, 2);
    return r == 2;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_short (0x7a3760)
