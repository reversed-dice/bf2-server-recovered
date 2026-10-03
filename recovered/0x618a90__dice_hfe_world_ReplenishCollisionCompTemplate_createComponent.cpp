// FUNCTION: BF2 0x618a90
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x618a50(void*, void*);
void* fn_0x618a90(void* self) {
    void* p = alloc_0x407508(0x38);
    ctor_0x618a50(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishCollisionCompTemplate_createComponent (0x618a90)
