// FUNCTION: BF2 0x622550
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x6224f0(void*, void*);
void* fn_0x622550(void* self) {
    void* p = alloc_0x407508(0x68);
    ctor_0x6224f0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SeekClosestTargetCompTemplate_createComponent (0x622550)
