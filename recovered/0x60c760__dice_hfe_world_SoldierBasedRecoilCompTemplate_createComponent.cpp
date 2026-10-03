// FUNCTION: BF2 0x60c760
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x60c6f0(void*, void*);
void* fn_0x60c760(void* self) {
    void* p = alloc_0x407508(0xc8);
    ctor_0x60c6f0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilCompTemplate_createComponent (0x60c760)
