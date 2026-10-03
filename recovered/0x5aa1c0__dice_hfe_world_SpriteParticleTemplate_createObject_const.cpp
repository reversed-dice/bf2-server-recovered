// FUNCTION: BF2 0x5aa1c0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5a9c20(void*, void*);
void* fn_0x5aa1c0(void* self) {
    void* p = alloc_0x407508(0x228);
    ctor_0x5a9c20(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleTemplate_createObject_const (0x5aa1c0)
