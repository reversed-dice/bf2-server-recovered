// FUNCTION: BF2 0x7c28f0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x7c28f0(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x30));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_console_Wrapper_getMinNoArgs_const (0x7c28f0)
