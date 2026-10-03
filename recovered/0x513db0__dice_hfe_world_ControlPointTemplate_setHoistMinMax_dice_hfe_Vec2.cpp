// FUNCTION: BF2 0x513db0
namespace dice { namespace hfe { namespace world {
void set_0x513db0(void* p, void* q) {
    unsigned int y = *(unsigned int*)((char*)q + 4);
    unsigned int x = *(unsigned int*)((char*)q + 0);
    *(unsigned int*)((char*)p + 0x2b0) = x;
    *(unsigned int*)((char*)p + 0x2b4) = y;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setHoistMinMax_dice_hfe_Vec2 (0x513db0)
