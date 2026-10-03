// FUNCTION: BF2 0x50a460
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x509340(void*, void*);
void* fn_0x50a460(void* self) {
    void* p = alloc_0x407508(0x268);
    ctor_0x509340(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundleTemplate_createObject_const (0x50a460)
