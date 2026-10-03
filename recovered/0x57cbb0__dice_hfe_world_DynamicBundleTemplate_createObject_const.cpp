// FUNCTION: BF2 0x57cbb0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x57caa0(void*, void*);
void* fn_0x57cbb0(void* self) {
    void* p = alloc_0x407508(0x238);
    ctor_0x57caa0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DynamicBundleTemplate_createObject_const (0x57cbb0)
