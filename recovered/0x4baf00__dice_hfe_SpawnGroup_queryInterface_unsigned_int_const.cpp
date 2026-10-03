// FUNCTION: BF2 0x4baf00
namespace dice { namespace hfe {
void* f_4baf00(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id != *(unsigned int*)0x00c7603c) {
        if (id == *(unsigned int*)0x00bc196c) return p + 0x8;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_queryInterface_unsigned_int_const (0x4baf00)
