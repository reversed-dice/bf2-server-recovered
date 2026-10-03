// FUNCTION: BF2 0x617ff0
namespace dice { namespace hfe {
void* f_617ff0(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7d104) return r;
    if (id != *(unsigned int*)0x00c75dbc) {
        if (id == *(unsigned int*)0x00c75dac) return p + 0x20;
        return 0;
    }
    return p + 0x20;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_DefaultCollisionComp_queryInterface_unsigned_int_const (0x617ff0)
