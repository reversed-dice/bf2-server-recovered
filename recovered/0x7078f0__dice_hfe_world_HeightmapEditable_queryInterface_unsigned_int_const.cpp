// FUNCTION: BF2 0x7078f0
namespace dice { namespace hfe { namespace world {
void* get_0x7078f0(void* p, unsigned int v) {
    if (*(unsigned int*)0x00c96578 == v) return (char*)p + 0xf0;
    if (*(unsigned int*)0x00bc19c4 == v) return (char*)p + 0xf8;
    if (__builtin_expect(*(unsigned int*)0x00bb8fac == v, 1)) return p;
    if (v == *(unsigned int*)0x00c9657c) return p;
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapEditable_queryInterface_unsigned_int_const (0x7078f0)
