// FUNCTION: BF2 0x5e92c0
namespace dice { namespace hfe {
void* f_5e92c0(char* p, unsigned int id) {
    char* r;
    if (*(unsigned int*)0x00bb8fac == id) r = p;
    else if (id == *(unsigned int*)0x00c7d110) r = p;
    else if (id == *(unsigned int*)0x00bc19c4) r = p + 0x100;
    else if (id == *(unsigned int*)0x00c7d0e0) r = p + 0x238;
    else if (id == *(unsigned int*)0x00c7d0e8) r = p + 0x268;
    else {
        r = p + 0x270;
        if (__builtin_expect(id != *(unsigned int*)0x00c7cea0, 0)) {
            r = 0;
            if (id == *(unsigned int*)0x00c75d40) r = p + 0x278;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_queryInterface_unsigned_int_const (0x5e92c0)
