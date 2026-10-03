// FUNCTION: BF2 0x621720
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x6216e0(void*, void*);
void* fn_0x621720(void* self) {
    void* p = alloc_0x407508(0x40);
    ctor_0x6216e0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FixedTargetCompTemplate_createComponent (0x621720)
