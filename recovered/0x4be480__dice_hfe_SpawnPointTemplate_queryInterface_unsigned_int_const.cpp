// FUNCTION: BF2 0x4be480
namespace dice { namespace hfe {
void* f_4be480(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7d134) return r;
    if (id != *(unsigned int*)0x00c7604c) {
        if (id == *(unsigned int*)0x00bc19c4) return p + 0x10;
        return 0;
    }
    return p + 0x68;
}
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_queryInterface_unsigned_int_const (0x4be480)
