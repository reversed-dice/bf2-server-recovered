// FUNCTION: BF2 0x762880
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x762880(void* p) {
    void* o = *(void**)((char*)p + 0xc8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x108));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_EngineSound_getTransform (0x762880)
