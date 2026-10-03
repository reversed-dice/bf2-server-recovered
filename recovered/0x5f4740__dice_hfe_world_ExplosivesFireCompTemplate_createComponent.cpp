// FUNCTION: BF2 0x5f4740
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5f4650(void*, void*);
void* fn_0x5f4740(void* self) {
    void* p = alloc_0x407508(0x1e0);
    ctor_0x5f4650(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ExplosivesFireCompTemplate_createComponent (0x5f4740)
