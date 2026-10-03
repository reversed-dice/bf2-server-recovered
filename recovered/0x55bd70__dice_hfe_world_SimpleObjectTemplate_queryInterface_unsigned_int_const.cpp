// FUNCTION: BF2 0x55bd70
namespace dice { namespace hfe {
void* f_55bd70(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7d134) return r;
    if (id != *(unsigned int*)0x00c7d124) {
        if (id == *(unsigned int*)0x00bc19c4) return p + 0x10;
        return 0;
    }
    return p + 0x68;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_queryInterface_unsigned_int_const (0x55bd70)
