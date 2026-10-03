// FUNCTION: BF2 0x599650
namespace dice { namespace hfe { namespace world {
struct EmitPos_0x599650 { int a; float b; float c; unsigned char d; };
void set_0x599650(void* p, int a, float b, float c, unsigned char d) {
    EmitPos_0x599650* e = (EmitPos_0x599650*)((char*)p + 0x498);
    e->a = a; e->b = b; e->c = c; e->d = d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EmitterTemplate_setPositionalSpeedInUp_dice_hfe_ContRandDist_float_float_bool (0x599650)
