// FUNCTION: BF2 0x5a12b0
namespace dice { namespace hfe { namespace world {
struct G { int a; float b, c; char d; };
extern float fn_508420(G* self, void* arg);
void cb_5a12b0(void* self, int iv, float f1, float f2, char c) {
    G* g = (G*)((char*)self + 0x148);
    g->a = iv;
    g->b = f1;
    g->c = f2;
    g->d = c;
    *(float*)((char*)self + 0xe4) = fn_508420(g, (void*)0x10a5128);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleTemplate_setGravityModifier_dice_hfe_Vec3_constref_float_int (0x5a12b0)
