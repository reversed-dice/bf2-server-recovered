// FUNCTION: BF2 0x722c20
typedef void (*vf_read_t)(void*, void*, unsigned int);

namespace dice { namespace hfe { namespace io {
void fn_0x722c20(void* stream, void* out) {
    vf_read_t f = (*(vf_read_t**)stream)[0x20/8];
    f(stream, out, 4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_read_dice_hfe_io_IStreamptr_unsigned_intref (0x722c20)
