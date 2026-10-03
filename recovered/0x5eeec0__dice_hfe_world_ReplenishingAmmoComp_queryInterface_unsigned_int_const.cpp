// FUNCTION: BF2 0x5eeec0
namespace dice { namespace hfe {
void* f_5eeec0(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7d104) return r;
    if (id != *(unsigned int*)0x00c75e6c) {
        if (id == *(unsigned int*)0x00c75e2c) return p + 0x20;
        return 0;
    }
    return p + 0x20;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoComp_queryInterface_unsigned_int_const (0x5eeec0)
