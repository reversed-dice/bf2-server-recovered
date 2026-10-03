// FUNCTION: BF2 0x506440
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5063a0(void*, void*);
void* fn_0x506440(void* self) {
    void* p = alloc_0x407508(0x278);
    ctor_0x5063a0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectAreaTemplate_createObject_const (0x506440)
