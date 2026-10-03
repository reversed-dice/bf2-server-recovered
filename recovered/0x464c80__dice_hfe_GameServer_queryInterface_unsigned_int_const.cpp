// FUNCTION: BF2 0x464c80
namespace dice { namespace hfe {
void* f_464c80(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id != *(unsigned int*)0x00c76028) {
        if (id == *(unsigned int*)0x00c76024) return p + 0x80;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_queryInterface_unsigned_int_const (0x464c80)
