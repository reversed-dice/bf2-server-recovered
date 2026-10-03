// FUNCTION: BF2 0x5a6a80
namespace dice { namespace hfe { namespace world {
typedef void (*VFn)(void*);
void wrap_0x5a6a80(void* p) {
    void* o = *(void**)((char*)p + 0x80);
    VFn fn = (VFn)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(o) + 0x70));
    fn(o);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase_getRadialDirection_const (0x5a6a80)
