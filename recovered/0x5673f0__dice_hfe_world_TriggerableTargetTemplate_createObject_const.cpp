// FUNCTION: BF2 0x5673f0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x564500(void*, void*);
void* fn_0x5673f0(void* self) {
    void* p = alloc_0x407508(0x308);
    ctor_0x564500(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TriggerableTargetTemplate_createObject_const (0x5673f0)
