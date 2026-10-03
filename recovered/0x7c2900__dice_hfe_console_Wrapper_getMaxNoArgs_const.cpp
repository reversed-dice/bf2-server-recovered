// FUNCTION: BF2 0x7c2900
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x7c2900(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x28));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_console_Wrapper_getMaxNoArgs_const (0x7c2900)
