// FUNCTION: BF2 0x5673b0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x563a20(void*, void*);
void* fn_0x5673b0(void* self) {
    void* p = alloc_0x407508(0x290);
    ctor_0x563a20(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TriggerableTemplate_createObject_const (0x5673b0)
