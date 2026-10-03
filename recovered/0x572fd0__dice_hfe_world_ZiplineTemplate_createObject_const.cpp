// FUNCTION: BF2 0x572fd0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x56bec0(void*, void*);
void* fn_0x572fd0(void* self) {
    void* p = alloc_0x407508(0x2a0);
    ctor_0x56bec0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZiplineTemplate_createObject_const (0x572fd0)
