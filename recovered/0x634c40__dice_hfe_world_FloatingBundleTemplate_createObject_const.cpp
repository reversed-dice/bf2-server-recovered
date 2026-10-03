// FUNCTION: BF2 0x634c40
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x634710(void*, void*);
void* fn_0x634c40(void* self) {
    void* p = alloc_0x407508(0x2c0);
    ctor_0x634710(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FloatingBundleTemplate_createObject_const (0x634c40)
