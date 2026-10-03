// FUNCTION: BF2 0x5a0430
namespace dice { namespace hfe { namespace world {
struct EmitPos_0x5a0430 { int a; float b; float c; unsigned char d; };
void set_0x5a0430(void* p, int a, float b, float c, unsigned char d) {
    EmitPos_0x5a0430* e = (EmitPos_0x5a0430*)((char*)p + 0x160);
    e->a = a; e->b = b; e->c = c; e->d = d;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleTemplate_setDrag_dice_hfe_ContRandDist_float_float_bool (0x5a0430)
