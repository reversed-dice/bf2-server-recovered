// FUNCTION: BF2 0x524ec0
namespace dice { namespace hfe { namespace world {
bool cb_524ec0(void* self, float x) {
    if (*(float*)((char*)self + 0x2c0) >= x) {
        *(float*)((char*)self + 0x2c0) -= x;
        return 1;
    }
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_taxAbility_float (0x524ec0)
