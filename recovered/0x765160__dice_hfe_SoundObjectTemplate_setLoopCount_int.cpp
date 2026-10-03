// FUNCTION: BF2 0x765160
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x765160(void* p) {
    void* o = *(void**)((char*)p + 0x78);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x30));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_SoundObjectTemplate_setLoopCount_int (0x765160)
