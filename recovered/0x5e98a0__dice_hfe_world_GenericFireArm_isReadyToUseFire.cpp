// FUNCTION: BF2 0x5e98a0
namespace dice { namespace hfe { namespace world {
extern "C" bool dice_hfe_world_GenericFireArm_busy_bool(void*, bool);
bool fn_0x5e98a0(void* self) {
    return !dice_hfe_world_GenericFireArm_busy_bool(self, false);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_isReadyToUseFire (0x5e98a0)
