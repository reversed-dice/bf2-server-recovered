// FUNCTION: BF2 0x4a21c0
namespace dice { namespace hfe {
void* f_4a21c0(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id != *(unsigned int*)0x00c7d0f8) {
        if (id == *(unsigned int*)0x00bc196c) return p + 0x18;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_Player_queryInterface_unsigned_int_const (0x4a21c0)
