// FUNCTION: BF2 0x6295c0
namespace dice { namespace hfe { namespace world {
float fn_0x6295c0(void* self) {
    float v = 1.0f;
    if (*(int*)((char*)self+0x34) > 0) {
        void* p = *(void**)((char*)self+0x48);
        v = *(float*)((char*)p+0x50);
    }
    return v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomComp_getMouseSpeedMod (0x6295c0)
