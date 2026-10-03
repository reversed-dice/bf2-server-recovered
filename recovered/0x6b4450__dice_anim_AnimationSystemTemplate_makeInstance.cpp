// FUNCTION: BF2 0x6b4450
namespace dice { namespace hfe {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x6b2300(void*, void*);
void* fn_0x6b4450(void* self) {
    void* p = alloc_0x407508(0xb8);
    ctor_0x6b2300(p, self);
    return p;
}
} }
// REVERSED_FUNCTION: dice_anim_AnimationSystemTemplate_makeInstance (0x6b4450)
