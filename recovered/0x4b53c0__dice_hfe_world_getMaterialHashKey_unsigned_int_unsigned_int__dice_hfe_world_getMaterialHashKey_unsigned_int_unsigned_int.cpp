// FUNCTION: BF2 0x4b53c0
namespace dice { namespace hfe { namespace world {

unsigned int getMaterialHashKey(unsigned int param_1, unsigned int param_2);

unsigned int getMaterialHashKey(unsigned int param_1, unsigned int param_2)
{
    return param_1 * 10000 + param_2;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_getMaterialHashKey_unsigned_int_unsigned_int (0x4b53c0)