// FUNCTION: BF2 0x7dc3d0
namespace dice { namespace hfe {
void* f_7dc3d0(char* p, unsigned int id) {
    char* r;
    if (*(unsigned int*)0x00bb8fac == id) r = p;
    else if (id == *(unsigned int*)0x00bc1a14) r = p;
    else if (id == *(unsigned int*)0x00bc19f4) r = p;
    else {
        r = p + 0x8;
        if (__builtin_expect(id != *(unsigned int*)0x00bc1a10, 0)) {
            r = 0;
            if (id == *(unsigned int*)0x00bc1a0c) r = p + 0x10;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_queryInterface_unsigned_int_const (0x7dc3d0)
