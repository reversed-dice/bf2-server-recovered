// FUNCTION: BF2 0x584ac0
namespace dice { namespace hfe {
void* f_584ac0(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7d110) return r;
    if (id != *(unsigned int*)0x00c7d128) {
        if (id == *(unsigned int*)0x00bc19c4) return p + 0x100;
        return 0;
    }
    return p + 0x238;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_queryInterface_unsigned_int_const (0x584ac0)
