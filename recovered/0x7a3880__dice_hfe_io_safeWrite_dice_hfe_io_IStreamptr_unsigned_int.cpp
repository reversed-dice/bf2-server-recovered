// FUNCTION: BF2 0x7a3880
namespace dice { namespace hfe { namespace io {
typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a3880(void* self, unsigned val) {
    void** vt = *(void***)self;
    unsigned stack = val;
    int r = ((vfn2)vt[0x28/8])(self, &stack, 4);
    return r == 4;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_unsigned_int (0x7a3880)
