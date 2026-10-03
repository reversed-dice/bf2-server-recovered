// FUNCTION: BF2 0x5f0910
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5f08b0(void*, void*);
void* fn_0x5f0910(void* self) {
    void* p = alloc_0x407508(0x68);
    ctor_0x5f08b0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleDeviationCompTemplate_createComponent (0x5f0910)
