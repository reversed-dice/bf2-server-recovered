// FUNCTION: BF2 0x4f5f10
namespace dice { namespace hfe {

extern "C" void dice_hfe_DemoSpectatorCamera_setMode_dice_hfe_DemoSpectatorCamera_Mode(void*, int);
extern "C" void dice_hfe_DemoSpectatorCamera_updateSpectateTarget_int(void*, int);

int fn_0x4f5f10(void* self) {
    dice_hfe_DemoSpectatorCamera_setMode_dice_hfe_DemoSpectatorCamera_Mode(self, 1);
    dice_hfe_DemoSpectatorCamera_updateSpectateTarget_int(self, 1);
    return 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera_nextPlayer (0x4f5f10)
