// FUNCTION: BF2 0x52e000
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x52df40(void*, void*);
void* fn_0x52e000(void* self) {
    void* p = alloc_0x407508(0x278);
    ctor_0x52df40(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_MaskObjectTemplate_createObject_const (0x52e000)
