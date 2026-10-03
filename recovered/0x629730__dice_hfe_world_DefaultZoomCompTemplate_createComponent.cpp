// FUNCTION: BF2 0x629730
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x6296c0(void*, void*);
void* fn_0x629730(void* self) {
    void* p = alloc_0x407508(0x50);
    ctor_0x6296c0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultZoomCompTemplate_createComponent (0x629730)
