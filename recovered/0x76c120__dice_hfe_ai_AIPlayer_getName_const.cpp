// FUNCTION: BF2 0x76c120
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x76c120(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x48));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayer_getName_const (0x76c120)
