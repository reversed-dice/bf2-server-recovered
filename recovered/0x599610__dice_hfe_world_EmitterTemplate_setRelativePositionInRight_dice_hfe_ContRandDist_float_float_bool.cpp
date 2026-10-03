// FUNCTION: BF2 0x599610
namespace dice { namespace hfe { namespace world {
struct EmitPos_0x599610 { int a; float b; float c; unsigned char d; };
void set_0x599610(void* p, int a, float b, float c, unsigned char d) {
    EmitPos_0x599610* e = (EmitPos_0x599610*)((char*)p + 0x468);
    e->a = a; e->b = b; e->c = c; e->d = d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EmitterTemplate_setRelativePositionInRight_dice_hfe_ContRandDist_float_float_bool (0x599610)
