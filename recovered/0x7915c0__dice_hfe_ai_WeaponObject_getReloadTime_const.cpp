// FUNCTION: BF2 0x7915c0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x7915c0(void* p) {
    void* o = *(void**)((char*)p + 0x10);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x160));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_getReloadTime_const (0x7915c0)
