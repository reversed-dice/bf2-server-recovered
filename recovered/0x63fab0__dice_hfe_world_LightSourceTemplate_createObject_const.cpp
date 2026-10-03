// FUNCTION: BF2 0x63fab0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x63f310(void*, void*);
void* fn_0x63fab0(void* self) {
    void* p = alloc_0x407508(0x480);
    ctor_0x63f310(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_createObject_const (0x63fab0)
