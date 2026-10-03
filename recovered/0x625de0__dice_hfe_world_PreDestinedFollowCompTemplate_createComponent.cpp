// FUNCTION: BF2 0x625de0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x625d70(void*, void*);
void* fn_0x625de0(void* self) {
    void* p = alloc_0x407508(0x70);
    ctor_0x625d70(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PreDestinedFollowCompTemplate_createComponent (0x625de0)
