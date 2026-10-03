// FUNCTION: BF2 0x5e98e0
namespace dice { namespace hfe { namespace world {
extern "C" bool dice_hfe_world_GenericFireArm_busy_bool(void*, bool);
bool fn_0x5e98e0(void* self) {
    return !dice_hfe_world_GenericFireArm_busy_bool(self, false);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_isReadyToUse (0x5e98e0)
