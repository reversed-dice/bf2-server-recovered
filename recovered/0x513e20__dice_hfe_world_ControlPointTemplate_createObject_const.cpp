// FUNCTION: BF2 0x513e20
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x510b00(void*, void*);
void* fn_0x513e20(void* self) {
    void* p = alloc_0x407508(0x298);
    ctor_0x510b00(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_createObject_const (0x513e20)
