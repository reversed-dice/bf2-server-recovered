// FUNCTION: BF2 0x78e750
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x78e750(void* p) {
    void* o = *(void**)((char*)p + 0x20);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x108));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectReal_getTransformation_const (0x78e750)
