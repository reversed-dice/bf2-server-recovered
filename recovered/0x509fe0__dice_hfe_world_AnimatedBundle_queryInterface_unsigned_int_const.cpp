// FUNCTION: BF2 0x509fe0
namespace dice { namespace hfe {
void* f_509fe0(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7d110) return r;
    if (id != *(unsigned int*)0x00bc19c4) {
        if (id == *(unsigned int*)0x00c7d0e0) return p + 0x238;
        return 0;
    }
    return p + 0x100;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundle_queryInterface_unsigned_int_const (0x509fe0)
