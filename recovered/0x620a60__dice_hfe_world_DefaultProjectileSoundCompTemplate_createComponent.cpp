// FUNCTION: BF2 0x620a60
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x620a20(void*, void*);
void* fn_0x620a60(void* self) {
    void* p = alloc_0x407508(0x40);
    ctor_0x620a20(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultProjectileSoundCompTemplate_createComponent (0x620a60)
