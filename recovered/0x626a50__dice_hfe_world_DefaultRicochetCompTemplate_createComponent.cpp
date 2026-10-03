// FUNCTION: BF2 0x626a50
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x626a10(void*, void*);
void* fn_0x626a50(void* self) {
    void* p = alloc_0x407508(0x38);
    ctor_0x626a10(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultRicochetCompTemplate_createComponent (0x626a50)
