// FUNCTION: BF2 0x5d1080
namespace dice { namespace hfe {
void* f_5d1080(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id != *(unsigned int*)0x00bc196c) {
        if (id == *(unsigned int*)0x00bc1968) return p + 0x50;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_ItemNetworkable_queryInterface_unsigned_int_const (0x5d1080)
