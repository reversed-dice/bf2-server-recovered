// FUNCTION: BF2 0x55efc0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x55d100(void*, void*);
void* fn_0x55efc0(void* self) {
    void* p = alloc_0x407508(0x258);
    ctor_0x55d100(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyObjectTemplate_createObject_const (0x55efc0)
