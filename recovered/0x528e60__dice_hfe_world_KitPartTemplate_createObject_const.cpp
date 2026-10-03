// FUNCTION: BF2 0x528e60
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x528a50(void*, void*);
void* fn_0x528e60(void* self) {
    void* p = alloc_0x407508(0x258);
    ctor_0x528a50(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_KitPartTemplate_createObject_const (0x528e60)
