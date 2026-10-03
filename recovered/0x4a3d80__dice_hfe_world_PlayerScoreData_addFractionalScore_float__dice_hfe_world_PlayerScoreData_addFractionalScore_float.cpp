// FUNCTION: BF2 0x4a3d80
namespace dice { namespace hfe { namespace world {
void add_0x4a3d80(void* p, float v) {
    *(float*)((char*)p + 0x1c) += v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerScoreData_addFractionalScore_float (0x4a3d80)
