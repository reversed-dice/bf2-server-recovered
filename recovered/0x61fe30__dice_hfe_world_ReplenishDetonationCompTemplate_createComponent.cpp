// FUNCTION: BF2 0x61fe30
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x61fdd0(void*, void*);
void* fn_0x61fe30(void* self) {
    void* p = alloc_0x407508(0x78);
    ctor_0x61fdd0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishDetonationCompTemplate_createComponent (0x61fe30)
