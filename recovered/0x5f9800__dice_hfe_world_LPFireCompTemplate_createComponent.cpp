// FUNCTION: BF2 0x5f9800
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5f9770(void*, void*);
void* fn_0x5f9800(void* self) {
    void* p = alloc_0x407508(0x198);
    ctor_0x5f9770(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LPFireCompTemplate_createComponent (0x5f9800)
