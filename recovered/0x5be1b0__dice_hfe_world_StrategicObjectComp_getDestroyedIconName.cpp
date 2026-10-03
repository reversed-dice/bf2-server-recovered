// FUNCTION: BF2 0x5be1b0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x5be1b0(void* p) {
    void* o = *(void**)((char*)p + 0x10);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x70));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectComp_getDestroyedIconName (0x5be1b0)
