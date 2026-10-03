// FUNCTION: BF2 0x6419d0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x6419d0(void* p) {
    void* o = *(void**)((char*)p + 0x10);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xa8));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffector_getBoundingRadius_const (0x6419d0)
