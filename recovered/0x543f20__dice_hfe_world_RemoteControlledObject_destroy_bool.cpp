// FUNCTION: BF2 0x543f20
namespace dice { namespace hfe { namespace world {

extern "C" void dice_hfe_world_RemoteControlledObject_removeFromGameLogic(void*);
extern "C" void dice_hfe_world_SimpleObject_destroy_bool(void*, bool);
void fn_0x543f20(void* self, bool val) {
    dice_hfe_world_RemoteControlledObject_removeFromGameLogic(self);
    dice_hfe_world_SimpleObject_destroy_bool(self, val);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObject_destroy_bool (0x543f20)
