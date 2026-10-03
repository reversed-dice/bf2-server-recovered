// FUNCTION: BF2 0x55c2c0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x55b000(void*, void*);
void* fn_0x55c2c0(void* self) {
    void* p = alloc_0x407508(0x2d0);
    ctor_0x55b000(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyDepotTemplate_createObject_const (0x55c2c0)
