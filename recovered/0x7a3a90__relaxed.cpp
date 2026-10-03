// FUNCTION: BF2 0x7a3a90
namespace dice { namespace hfe { namespace io {
typedef int (*vfn3)(void*, void*, int);
bool fn_0x7a3a70(void* self, const void* data, unsigned len) {
    void** vt = *(void***)self;
    int r = ((vfn3)vt[0x20/8])(self, (void*)data, len);
    return (int)len == r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_safeWrite_dice_hfe_io_IStreamptr_void_constptr_unsigned_int (0x7a3a70)
