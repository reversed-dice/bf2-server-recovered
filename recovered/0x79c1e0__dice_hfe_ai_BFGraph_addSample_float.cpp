// FUNCTION: BF2 0x79c1e0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x79c1e0(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x80));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFGraph_addSample_float (0x79c1e0)
