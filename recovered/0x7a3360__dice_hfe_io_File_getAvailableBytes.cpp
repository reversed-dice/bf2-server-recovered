// FUNCTION: BF2 0x7a3360
typedef void (*vf_t)(void*);

namespace dice { namespace hfe { namespace io {
void fn_0x7a3360(void* self) {
    void* real = *(void**)self;
    vf_t f = (*(vf_t**)real)[0x38/8];
    f(real);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_File_getAvailableBytes (0x7a3360)
