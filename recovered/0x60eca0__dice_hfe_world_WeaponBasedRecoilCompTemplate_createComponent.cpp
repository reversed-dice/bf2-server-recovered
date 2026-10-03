// FUNCTION: BF2 0x60eca0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x60ec20(void*, void*);
void* fn_0x60eca0(void* self) {
    void* p = alloc_0x407508(0xa0);
    ctor_0x60ec20(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponBasedRecoilCompTemplate_createComponent (0x60eca0)
