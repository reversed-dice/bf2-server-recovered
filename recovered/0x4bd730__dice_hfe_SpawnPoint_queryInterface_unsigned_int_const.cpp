// FUNCTION: BF2 0x4bd730
namespace dice { namespace hfe {
void* f_4bd730(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id == *(unsigned int*)0x00c7d110) return r;
    if (id != *(unsigned int*)0x00c76050) {
        if (id == *(unsigned int*)0x00bc19c4) return p + 0x100;
        return 0;
    }
    return p + 0x218;
}
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_queryInterface_unsigned_int_const (0x4bd730)
