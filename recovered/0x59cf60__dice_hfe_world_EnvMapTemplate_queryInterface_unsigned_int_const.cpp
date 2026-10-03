// FUNCTION: BF2 0x59cf60
namespace dice { namespace hfe {
void* f_59cf60(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id != *(unsigned int*)0x00c7d134) {
        if (id == *(unsigned int*)0x00bc19c4) return p + 0x10;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_EnvMapTemplate_queryInterface_unsigned_int_const (0x59cf60)
