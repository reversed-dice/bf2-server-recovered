// FUNCTION: BF2 0x636e00
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x636790(void*, void*);
void* fn_0x636e00(void* self) {
    void* p = alloc_0x407508(0x2d8);
    ctor_0x636790(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LandingGearTemplate_createObject_const (0x636e00)
