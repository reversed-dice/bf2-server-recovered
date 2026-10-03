// FUNCTION: BF2 0x52dbc0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5291e0(void*, void*);
void* fn_0x52dbc0(void* self) {
    void* p = alloc_0x407508(0x640);
    ctor_0x5291e0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LadderContainerTemplate_createObject_const (0x52dbc0)
