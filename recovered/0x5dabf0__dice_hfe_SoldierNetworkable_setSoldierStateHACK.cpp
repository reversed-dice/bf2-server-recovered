// FUNCTION: BF2 0x5dabf0
extern "C" void dice_hfe_world_Soldier_updateTransformation(void*);
extern "C" void dice_hfe_world_Soldier_updateCameraTransformation(void*);
namespace dice { namespace hfe {
void fn_0x5dabf0(void* self) {
    void* p = *(void**)((char*)self+0x60);
    dice_hfe_world_Soldier_updateTransformation(p);
    dice_hfe_world_Soldier_updateCameraTransformation(p);
}
} }
// REVERSED_FUNCTION: dice_hfe_SoldierNetworkable_setSoldierStateHACK (0x5dabf0)
