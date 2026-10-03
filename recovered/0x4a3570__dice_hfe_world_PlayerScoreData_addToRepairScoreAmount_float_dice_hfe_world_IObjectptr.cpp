// FUNCTION: BF2 0x4a3570
namespace dice { namespace hfe { namespace world {
void add_0x4a3570(void* p, float v) {
    *(float*)((char*)p + 0x28) += v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_addToRepairScoreAmount_float_dice_hfe_world_IObjectptr (0x4a3570)
