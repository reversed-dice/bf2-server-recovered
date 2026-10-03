// FUNCTION: BF2 0x581900
namespace dice { namespace hfe {
void* f_581900(char* p, unsigned int id) {
    char* r;
    if (*(unsigned int*)0x00bb8fac == id) r = p;
    else if (id == *(unsigned int*)0x00c7d110) r = p;
    else if (id == *(unsigned int*)0x00c7d128) r = p + 0x238;
    else if (id == *(unsigned int*)0x00c7d12c) r = p + 0x240;
    else {
        r = p + 0x248;
        if (__builtin_expect(id != *(unsigned int*)0x00c7ce6c, 0)) {
            r = 0;
            if (id == *(unsigned int*)0x00bc19c4) r = p + 0x100;
        }
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_queryInterface_unsigned_int_const (0x581900)
