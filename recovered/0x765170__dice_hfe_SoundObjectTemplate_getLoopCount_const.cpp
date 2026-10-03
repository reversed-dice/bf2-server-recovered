// FUNCTION: BF2 0x765170
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x765170(void* p) {
    void* o = *(void**)((char*)p + 0x78);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x38));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_getLoopCount_const (0x765170)
