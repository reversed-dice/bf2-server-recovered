// FUNCTION: BF2 0x603d50
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x603ce0(void*, void*);
void* fn_0x603d50(void* self) {
    void* p = alloc_0x407508(0xa0);
    ctor_0x603ce0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LPTargetCompTemplate_createComponent (0x603d50)
