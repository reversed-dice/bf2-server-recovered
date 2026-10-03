// FUNCTION: BF2 0x79c1c0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x79c1c0(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xc0));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFGraph_setCurrentSampleOffset_int_int (0x79c1c0)
