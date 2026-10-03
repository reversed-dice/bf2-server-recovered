// FUNCTION: BF2 0x5be600
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5be0a0(void*, void*);
void* fn_0x5be600(void* self) {
    void* p = alloc_0x407508(0x30);
    ctor_0x5be0a0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_createComponent (0x5be600)
