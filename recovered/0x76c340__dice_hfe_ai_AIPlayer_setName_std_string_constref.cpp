// FUNCTION: BF2 0x76c340
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x76c340(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x40));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayer_setName_std_string_constref (0x76c340)
