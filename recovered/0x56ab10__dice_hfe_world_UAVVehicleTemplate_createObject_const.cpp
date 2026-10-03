// FUNCTION: BF2 0x56ab10
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5698f0(void*, void*);
void* fn_0x56ab10(void* self) {
    void* p = alloc_0x407508(0x248);
    ctor_0x5698f0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_UAVVehicleTemplate_createObject_const (0x56ab10)
