// FUNCTION: BF2 0x642210
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x642210(void* p) {
    void* o = *(void**)((char*)p + 0x18);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xd8));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffector_getAbsolutePosition_const (0x642210)
