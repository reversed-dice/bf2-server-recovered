// FUNCTION: BF2 0x79c6b0
namespace dice { namespace hfe { namespace ai {

typedef void (*vfn6)(void*,void*,void*,float,unsigned,bool);
void fn_0x79c6b0(void* self, void* p1, void* p2, float f, unsigned u, bool flag) {
    void* g = *(void**)0x10adfa8;
    void** vt = *(void***)g;
    ((vfn6)vt[0x20/8])(g, p1, p2, f, u, flag);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_DebugRenderer_drawCircle_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_float_unsigned_int_bool_int_const (0x79c6b0)
