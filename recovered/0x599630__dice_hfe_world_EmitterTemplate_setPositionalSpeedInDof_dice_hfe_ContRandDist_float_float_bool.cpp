// FUNCTION: BF2 0x599630
namespace dice { namespace hfe { namespace world {
struct EmitPos_0x599630 { int a; float b; float c; unsigned char d; };
void set_0x599630(void* p, int a, float b, float c, unsigned char d) {
    EmitPos_0x599630* e = (EmitPos_0x599630*)((char*)p + 0x480);
    e->a = a; e->b = b; e->c = c; e->d = d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EmitterTemplate_setPositionalSpeedInDof_dice_hfe_ContRandDist_float_float_bool (0x599630)

// re-trigger validate
