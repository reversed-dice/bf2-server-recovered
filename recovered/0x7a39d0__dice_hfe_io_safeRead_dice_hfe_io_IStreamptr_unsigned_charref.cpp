// FUNCTION: BF2 0x7a39d0
namespace dice { namespace hfe { namespace io {
typedef int (*vfn3)(void*, void*, int);
bool fn_0x7a39d0(void* self, void* ref) {
    void** vt = *(void***)self;
    int r = ((vfn3)vt[0x20/8])(self, ref, 1);
    return r == 1;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeRead_dice_hfe_io_IStreamptr_unsigned_charref (0x7a39d0)
