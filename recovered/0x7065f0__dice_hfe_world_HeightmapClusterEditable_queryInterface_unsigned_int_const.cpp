// FUNCTION: BF2 0x7065f0
namespace dice { namespace hfe { namespace world {
void* get_0x7065f0(void* p, unsigned int v) {
    if (*(unsigned int*)0x00c96574 == v) return p;
    void* q = (char*)p + 8;
    if (__builtin_expect(*(unsigned int*)0x00bb8fac == v, 1)) return q;
    if (v == *(unsigned int*)0x00c96580) return q;
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_HeightmapClusterEditable_queryInterface_unsigned_int_const (0x7065f0)
