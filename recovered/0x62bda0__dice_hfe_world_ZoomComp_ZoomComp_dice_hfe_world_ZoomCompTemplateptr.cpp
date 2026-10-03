// FUNCTION: BF2 0x62bda0
namespace dice { namespace hfe { namespace world {
void ctor_0x62bda0(void* p, void* rsi) {
    *(unsigned int*)((char*)p + 0x8) = 0x1;
    *(void**)p = (void*)0xb806b0;
    *(void**)((char*)p + 0x20) = (void*)0xb80860;
    *(void**)((char*)p + 0x28) = (rsi);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZoomComp_ZoomComp_dice_hfe_world_ZoomCompTemplateptr (0x62bda0)
