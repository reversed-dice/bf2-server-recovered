// FUNCTION: BF2 0x524930
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x573e90(void*, void*);
void* fn_0x524930(void* self) {
    void* p = alloc_0x407508(0x238);
    ctor_0x573e90(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemContainerTemplate_createObject_const (0x524930)
