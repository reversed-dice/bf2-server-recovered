// FUNCTION: BF2 0x5c2810
namespace dice { namespace hfe { namespace world {
void set_0x5c2810(void* p, void* q) {
    unsigned int y = *(unsigned int*)((char*)q + 4);
    unsigned int x = *(unsigned int*)((char*)q + 0);
    *(unsigned int*)((char*)p + 0x98) = x;
    *(unsigned int*)((char*)p + 0x9c) = y;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_VehicleHudCompTemplate_setVehicleIconPos_dice_hfe_Vec2_constref (0x5c2810)
