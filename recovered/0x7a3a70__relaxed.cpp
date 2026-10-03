// FUNCTION: BF2 0x7a3a70
namespace dice { namespace hfe { namespace io {
typedef int (*vfn3)(void*, void*, int);
bool fn_0x7a3a90(void* self, void* data, unsigned len) {
    void** vt = *(void***)self;
    int r = ((vfn3)vt[0x28/8])(self, data, len);
    return (int)len == r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeRead_dice_hfe_io_IStreamptr_voidptr_unsigned_int (0x7a3a90)
