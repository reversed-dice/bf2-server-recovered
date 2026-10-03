// FUNCTION: BF2 0x7a38e0
namespace dice { namespace hfe { namespace io {
typedef int (*vfn3)(void*, void*, int);
bool fn_0x7a38e0(void* self, unsigned long val) {
    unsigned long buf = val;
    void** vt = *(void***)self;
    int r = ((vfn3)vt[0x28/8])(self, &buf, 8);
    return r == 8;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_unsigned_long (0x7a38e0)
