// FUNCTION: BF2 0x50de00
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x50cd80(void*, void*);
void* fn_0x50de00(void* self) {
    void* p = alloc_0x407508(0x280);
    ctor_0x50cd80(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AreaObjectTemplate_createObject_const (0x50de00)
