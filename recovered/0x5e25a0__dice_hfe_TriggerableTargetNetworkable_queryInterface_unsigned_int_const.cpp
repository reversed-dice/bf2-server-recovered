// FUNCTION: BF2 0x5e25a0
namespace dice { namespace hfe { namespace world {
void* get_0x5e25a0(void* p, unsigned int v) {
    if (*(unsigned int*)0x00bb8fac == v) return p;
    if (__builtin_expect(v == *(unsigned int*)0x00bc1968, 1)) return (char*)p + 0x50;
    if (v == *(unsigned int*)0x00bc196c) return p;
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_TriggerableTargetNetworkable_queryInterface_unsigned_int_const (0x5e25a0)
