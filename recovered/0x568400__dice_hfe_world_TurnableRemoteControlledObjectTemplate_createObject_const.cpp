// FUNCTION: BF2 0x568400
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x568370(void*, void*);
void* fn_0x568400(void* self) {
    void* p = alloc_0x407508(0x2b0);
    ctor_0x568370(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TurnableRemoteControlledObjectTemplate_createObject_const (0x568400)
