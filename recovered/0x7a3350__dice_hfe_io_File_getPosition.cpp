// FUNCTION: BF2 0x7a3350
typedef void (*vf_t)(void*);

namespace dice { namespace hfe { namespace io {
void fn_0x7a3350(void* self) {
    void* real = *(void**)self;
    vf_t f = (*(vf_t**)real)[0x68/8];
    f(real);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_File_getPosition (0x7a3350)
