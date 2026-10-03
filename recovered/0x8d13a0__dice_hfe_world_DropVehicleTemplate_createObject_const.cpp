// FUNCTION: BF2 0x8d13a0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x517ce0(void*, void*);
void* fn_0x8d13a0(void* self) {
    void* p = alloc_0x407508(0x270);
    ctor_0x517ce0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DropVehicleTemplate_createObject_const (0x8d13a0)
