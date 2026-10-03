// FUNCTION: BF2 0x5ec870
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5ec820(void*, void*);
void* fn_0x5ec870(void* self) {
    void* p = alloc_0x407508(0x98);
    ctor_0x5ec820(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAmmoCompTemplate_createComponent (0x5ec870)
