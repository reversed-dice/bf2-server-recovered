// FUNCTION: BF2 0x60a9f0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x60a990(void*, void*);
void* fn_0x60a9f0(void* self) {
    void* p = alloc_0x407508(0x58);
    ctor_0x60a990(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_createComponent (0x60a9f0)
