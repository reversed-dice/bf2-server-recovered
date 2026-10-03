// FUNCTION: BF2 0x5995d0
namespace dice { namespace hfe { namespace world {
struct EmitPos_0x5995d0 { int a; float b; float c; unsigned char d; };
void set_0x5995d0(void* p, int a, float b, float c, unsigned char d) {
    EmitPos_0x5995d0* e = (EmitPos_0x5995d0*)((char*)p + 0x438);
    e->a = a; e->b = b; e->c = c; e->d = d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EmitterTemplate_setRelativePositionInDof_dice_hfe_ContRandDist_float_float_bool (0x5995d0)
