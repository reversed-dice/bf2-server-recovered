// FUNCTION: BF2 0x5606f0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x55f0e0(void*, void*);
void* fn_0x5606f0(void* self) {
    void* p = alloc_0x407508(0x260);
    ctor_0x55f0e0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetObjectTemplate_createObject_const (0x5606f0)
