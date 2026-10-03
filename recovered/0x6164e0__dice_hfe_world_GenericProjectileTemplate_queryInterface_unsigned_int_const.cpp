// FUNCTION: BF2 0x6164e0
namespace dice { namespace hfe {
void* f_6164e0(char* p, unsigned int id) {
    char* r;
    if (*(unsigned int*)0x00bb8fac == id) r = p;
    else if (id == *(unsigned int*)0x00c7d134) r = p;
    else if (id == *(unsigned int*)0x00c7d124) r = p + 0x68;
    else if (id == *(unsigned int*)0x00c7d130) r = p + 0x1c8;
    else {
        r = p + 0x10;
        if (__builtin_expect(id != *(unsigned int*)0x00bc19c4, 0)) {
            r = 0;
            if (id == *(unsigned int*)0x00c7ce98) r = p + 0x1f8;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_queryInterface_unsigned_int_const (0x6164e0)
