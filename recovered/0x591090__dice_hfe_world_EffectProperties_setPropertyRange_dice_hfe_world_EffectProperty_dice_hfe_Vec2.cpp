// FUNCTION: BF2 0x591090
namespace dice { namespace hfe { namespace world {

void fn_0x591090(void* self, int idx, void* vec2r) {
    int c = *(int*)((char*)vec2r+4);
    int a = *(int*)vec2r;
    void* elem = (char*)self + (long)idx*8;
    *(int*)((char*)elem+8) = a;
    *(int*)((char*)elem+0xc) = c;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectProperties_setPropertyRange_dice_hfe_world_EffectProperty_dice_hfe_Vec2 (0x591090)
