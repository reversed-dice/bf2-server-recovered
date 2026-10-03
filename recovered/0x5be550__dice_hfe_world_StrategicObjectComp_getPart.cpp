// FUNCTION: BF2 0x5be550
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x5be550(void* p) {
    void* o = *(void**)((char*)p + 0x10);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0xa0));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectComp_getPart (0x5be550)
