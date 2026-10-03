// FUNCTION: BF2 0x60b570
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x60b520(void*, void*);
void* fn_0x60b570(void* self) {
    void* p = alloc_0x407508(0x48);
    ctor_0x60b520(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownAnimationCompTemplate_createComponent (0x60b570)
