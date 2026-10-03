// FUNCTION: BF2 0x521c20
namespace dice { namespace hfe {
void* f_521c20(char* p, unsigned int id) {
    char* r;
    if (*(unsigned int*)0x00bb8fac == id) r = p;
    else if (id == *(unsigned int*)0x00c7ce6c) r = p + 0x238;
    else if (id == *(unsigned int*)0x00c7d110) r = p;
    else {
        r = p + 0x100;
        if (__builtin_expect(id != *(unsigned int*)0x00bc19c4, 0)) {
            r = 0;
            if (id == *(unsigned int*)0x00c7d0e0) r = p + 0x240;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_GrapplingHookRopeContainer_queryInterface_unsigned_int_const (0x521c20)
