// FUNCTION: BF2 0x5248e0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5240d0(void*, void*);
void* fn_0x5248e0(void* self) {
    void* p = alloc_0x407508(0x258);
    ctor_0x5240d0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemTemplate_createObject_const (0x5248e0)
