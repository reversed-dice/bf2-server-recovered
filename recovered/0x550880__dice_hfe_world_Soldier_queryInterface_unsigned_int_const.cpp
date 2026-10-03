// FUNCTION: BF2 0x550880
namespace dice { namespace hfe {
void* f_550880(char* p, unsigned int id) {
    char* r;
    if (*(unsigned int*)0x00bb8fac == id) r = p;
    else if (id == *(unsigned int*)0x00c7d110) r = p;
    else if (id == *(unsigned int*)0x00c7ce20) r = p + 0x248;
    else if (id == *(unsigned int*)0x00bc19c4) r = p + 0x100;
    else {
        r = p + 0x240;
        if (__builtin_expect(id != *(unsigned int*)0x00c7d0e4, 0)) {
            r = 0;
            if (id == *(unsigned int*)0x00c7ce6c) r = p + 0x238;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_queryInterface_unsigned_int_const (0x550880)
