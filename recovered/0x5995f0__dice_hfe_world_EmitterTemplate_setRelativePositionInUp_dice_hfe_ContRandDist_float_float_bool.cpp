// FUNCTION: BF2 0x5995f0
namespace dice { namespace hfe { namespace world {
struct EmitPos_0x5995f0 { int a; float b; float c; unsigned char d; };
void set_0x5995f0(void* p, int a, float b, float c, unsigned char d) {
    EmitPos_0x5995f0* e = (EmitPos_0x5995f0*)((char*)p + 0x450);
    e->a = a; e->b = b; e->c = c; e->d = d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EmitterTemplate_setRelativePositionInUp_dice_hfe_ContRandDist_float_float_bool (0x5995f0)
