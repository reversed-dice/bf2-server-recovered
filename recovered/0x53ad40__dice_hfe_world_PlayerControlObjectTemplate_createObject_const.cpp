// FUNCTION: BF2 0x53ad40
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x53a920(void*, void*);
void* fn_0x53ad40(void* self) {
    void* p = alloc_0x407508(0x600);
    ctor_0x53a920(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_createObject_const (0x53ad40)
