// FUNCTION: BF2 0x545800
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x544f80(void*, void*);
void* fn_0x545800(void* self) {
    void* p = alloc_0x407508(0x250);
    ctor_0x544f80(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_HookLinkTemplate_createObject_const (0x545800)
