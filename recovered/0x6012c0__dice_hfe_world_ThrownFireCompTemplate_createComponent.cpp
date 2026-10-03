// FUNCTION: BF2 0x6012c0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x6011f0(void*, void*);
void* fn_0x6012c0(void* self) {
    void* p = alloc_0x407508(0x1c8);
    ctor_0x6011f0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireCompTemplate_createComponent (0x6012c0)
