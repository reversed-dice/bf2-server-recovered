// FUNCTION: BF2 0x601f00
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x601e70(void*, void*);
void* fn_0x601f00(void* self) {
    void* p = alloc_0x407508(0xb0);
    ctor_0x601e70(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundCompTemplate_createComponent (0x601f00)
