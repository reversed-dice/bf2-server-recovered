// FUNCTION: BF2 0x523e90
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x51d3e0(void*, void*);
void* fn_0x523e90(void* self) {
    void* p = alloc_0x407508(0x340);
    ctor_0x51d3e0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GrapplingHookRopeTemplate_createObject_const (0x523e90)
