// FUNCTION: BF2 0x77b840
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x77b840(void* p) {
    void* o = *(void**)((char*)p + 0x8);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x130));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFTerrain_getWaterLevel_float_float_const (0x77b840)
