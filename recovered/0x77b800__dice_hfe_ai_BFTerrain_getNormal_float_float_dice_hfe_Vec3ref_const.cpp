// FUNCTION: BF2 0x77b800
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x77b800(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xf8));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_getNormal_float_float_dice_hfe_Vec3ref_const (0x77b800)
