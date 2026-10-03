// FUNCTION: BF2 0x4f1e90
namespace dice { namespace hfe {
extern "C" bool dice_hfe_DemoSpectatorCamera_nextCamera(void*);
bool fn_0x4f1eb0(void* self) {
    void* cam = *(void**)((char*)self+0xa0);
    if (!cam) return false;
    return dice_hfe_DemoSpectatorCamera_nextCamera(cam);
}
} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder_nextCamera (0x4f1eb0)
