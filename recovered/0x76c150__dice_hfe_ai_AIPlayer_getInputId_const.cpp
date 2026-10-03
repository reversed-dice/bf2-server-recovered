// FUNCTION: BF2 0x76c150
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x76c150(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xa0));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayer_getInputId_const (0x76c150)
