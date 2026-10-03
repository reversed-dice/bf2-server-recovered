// FUNCTION: BF2 0x5ed8f0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5ed840(void*, void*);
void* fn_0x5ed8f0(void* self) {
    void* p = alloc_0x407508(0xd8);
    ctor_0x5ed840(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoCompTemplate_createComponent (0x5ed8f0)
