// FUNCTION: BF2 0x629640
namespace dice { namespace hfe { namespace world {
void set_0x629640(void* p, float v) {
    *(float*)((char*)p + 0x48) = v;
    *(int*)((char*)p + 0x4c) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomCompTemplate_setChangeFovDelay_float (0x629640)
