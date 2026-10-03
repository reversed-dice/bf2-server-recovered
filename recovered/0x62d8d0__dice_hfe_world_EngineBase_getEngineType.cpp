// FUNCTION: BF2 0x62d8d0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x62d8d0(void* p) {
    void* o = *(void**)((char*)p + 0x2c0);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x288));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineBase_getEngineType (0x62d8d0)
