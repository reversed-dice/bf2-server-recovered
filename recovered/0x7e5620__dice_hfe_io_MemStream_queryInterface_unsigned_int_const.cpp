// FUNCTION: BF2 0x7e5620
namespace dice { namespace hfe {
void* f_7e5620(char* p, unsigned int id) {
    char* r;
    if (*(unsigned int*)0x00bb8fac == id) r = p;
    else if (id == *(unsigned int*)0x00bc1a14) r = p;
    else if (id == *(unsigned int*)0x00bc1a10) r = p;
    else if (id == *(unsigned int*)0x00bc19fc) r = p;
    else {
        r = p;
        if (__builtin_expect(id != *(unsigned int*)0x00bc19f8, 0)) {
            r = 0;
            if (id == *(unsigned int*)0x00bc1a0c) r = p + 0x8;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_io_MemStream_queryInterface_unsigned_int_const (0x7e5620)
