// FUNCTION: BF2 0x7a3790
namespace dice { namespace hfe { namespace io {
typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a3790(void* self, int val) {
    void** vt = *(void***)self;
    int stack = val;
    int r = ((vfn2)vt[0x28/8])(self, &stack, 4);
    return r == 4;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_int (0x7a3790)
