// FUNCTION: BF2 0x784340
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x784340(void* p) {
    void* o = *(void**)((char*)p + 0x10);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x30));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectControlInfo_getDriveControls_const (0x784340)
