// FUNCTION: BF2 0x6100a0
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x6100a0(void* p) {
    void* o = *(void**)((char*)p + 0x258);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x2c8));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getTracerInterval_const (0x6100a0)
