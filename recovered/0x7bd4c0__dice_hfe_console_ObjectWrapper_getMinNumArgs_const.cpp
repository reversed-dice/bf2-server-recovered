// FUNCTION: BF2 0x7bd4c0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x7bd4c0(void* p) {
    void* o = *(void**)((char*)p + 0x20);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x50));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_console_ObjectWrapper_getMinNumArgs_const (0x7bd4c0)
