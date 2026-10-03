// FUNCTION: BF2 0x79c1a0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x79c1a0(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xc8));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFGraph_setCurrentSampleEnding_std_string_constref (0x79c1a0)
