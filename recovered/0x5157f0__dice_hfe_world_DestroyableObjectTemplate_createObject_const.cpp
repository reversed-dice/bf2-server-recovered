// FUNCTION: BF2 0x5157f0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x514f40(void*, void*);
void* fn_0x5157f0(void* self) {
    void* p = alloc_0x407508(0x240);
    ctor_0x514f40(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableObjectTemplate_createObject_const (0x5157f0)
