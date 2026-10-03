// FUNCTION: BF2 0x7864d0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x7864d0(void* p) {
    void* o = *(void**)((char*)p + 0x40);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x2d8));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_getSpeed (0x7864d0)
