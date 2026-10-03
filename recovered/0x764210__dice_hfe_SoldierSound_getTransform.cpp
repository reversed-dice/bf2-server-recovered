// FUNCTION: BF2 0x764210
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x764210(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x108));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_SoldierSound_getTransform (0x764210)
