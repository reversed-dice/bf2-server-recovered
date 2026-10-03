// FUNCTION: BF2 0x5882c0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5873e0(void*, void*);
void* fn_0x5882c0(void* self) {
    void* p = alloc_0x407508(0x2c0);
    ctor_0x5873e0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundleTemplate_createObject_const (0x5882c0)
