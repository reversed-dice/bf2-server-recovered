// FUNCTION: BF2 0x5163d0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x515a40(void*, void*);
void* fn_0x5163d0(void* self) {
    void* p = alloc_0x407508(0x238);
    ctor_0x515a40(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DestroyableWindowTemplate_createObject_const (0x5163d0)
