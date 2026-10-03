// FUNCTION: BF2 0x61ad90
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x61ac70(void*, void*);
void* fn_0x61ad90(void* self) {
    void* p = alloc_0x407508(0x90);
    ctor_0x61ac70(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_StickyCollisionCompTemplate_createComponent (0x61ad90)
