// FUNCTION: BF2 0x627ee0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x627ea0(void*, void*);
void* fn_0x627ee0(void* self) {
    void* p = alloc_0x407508(0x38);
    ctor_0x627ea0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultPenetrateCompTemplate_createComponent (0x627ee0)
