// FUNCTION: BF2 0x629620
namespace dice { namespace hfe { namespace world {
void set_0x629620(void* p, float v) {
    *(float*)((char*)p + 0x38) = v;
    *(int*)((char*)p + 0x3c) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomCompTemplate_setZoomDelay_float (0x629620)
