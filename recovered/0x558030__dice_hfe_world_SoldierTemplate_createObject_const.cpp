// FUNCTION: BF2 0x558030
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x54a1d0(void*, void*);
void* fn_0x558030(void* self) {
    void* p = alloc_0x407508(0x5c0);
    ctor_0x54a1d0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierTemplate_createObject_const (0x558030)
