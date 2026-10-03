// FUNCTION: BF2 0x5367e0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5359a0(void*, void*);
void* fn_0x5367e0(void* self) {
    void* p = alloc_0x407508(0x618);
    ctor_0x5359a0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParachuteTemplate_createObject_const (0x5367e0)
