// FUNCTION: BF2 0x619e30
namespace dice { namespace hfe {
void* f_619e30(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7ce64) return r;
    if (id != *(unsigned int*)0x00c75db4) {
        if (id == *(unsigned int*)0x00bc19c4) return p + 0x8;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_ResurrectCollisionCompTemplate_queryInterface_unsigned_int_const (0x619e30)
