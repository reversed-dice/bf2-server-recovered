// FUNCTION: BF2 0x522140
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x518c90(void*, void*);
void* fn_0x522140(void* self) {
    void* p = alloc_0x407508(0x678);
    ctor_0x518c90(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GrapplingHookRopeContainerTemplate_createObject_const (0x522140)
