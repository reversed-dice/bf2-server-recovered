// FUNCTION: BF2 0x4f1ed0
namespace dice { namespace hfe {
extern "C" bool dice_hfe_DemoSpectatorCamera_nextPlayer(void*);
bool fn_0x4f1ed0(void* self) {
    void* cam = *(void**)((char*)self+0xa0);
    if (!cam) return false;
    return dice_hfe_DemoSpectatorCamera_nextPlayer(cam);
}
} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_nextPlayer (0x4f1ed0)
