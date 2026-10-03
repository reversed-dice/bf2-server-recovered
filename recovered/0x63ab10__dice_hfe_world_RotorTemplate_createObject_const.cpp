// FUNCTION: BF2 0x63ab10
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x63a640(void*, void*);
void* fn_0x63ab10(void* self) {
    void* p = alloc_0x407508(0x260);
    ctor_0x63a640(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_RotorTemplate_createObject_const (0x63ab10)
