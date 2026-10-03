// FUNCTION: BF2 0x7ddcc0
namespace dice { namespace hfe {
void* f_7ddcc0(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id != *(unsigned int*)0x00bc1970) {
        if (id == *(unsigned int*)0x00bc197c) return p + 0x8;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_io_FileChangeManager_queryInterface_unsigned_int_const (0x7ddcc0)
