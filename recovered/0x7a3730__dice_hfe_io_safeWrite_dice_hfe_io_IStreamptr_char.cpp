// FUNCTION: BF2 0x7a3730
namespace dice { namespace hfe { namespace io {
typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a3730(void* self, char val) {
    void** vt = *(void***)self;
    unsigned stack;
    *(char*)&stack = val;
    int r = ((vfn2)vt[0x28/8])(self, &stack, 1);
    return r == 1;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_char (0x7a3730)
