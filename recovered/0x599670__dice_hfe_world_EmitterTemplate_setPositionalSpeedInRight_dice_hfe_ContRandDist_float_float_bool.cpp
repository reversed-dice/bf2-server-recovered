// FUNCTION: BF2 0x599670
namespace dice { namespace hfe { namespace world {
struct EmitPos_0x599670 { int a; float b; float c; unsigned char d; };
void set_0x599670(void* p, int a, float b, float c, unsigned char d) {
    EmitPos_0x599670* e = (EmitPos_0x599670*)((char*)p + 0x4b0);
    e->a = a; e->b = b; e->c = c; e->d = d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EmitterTemplate_setPositionalSpeedInRight_dice_hfe_ContRandDist_float_float_bool (0x599670)
