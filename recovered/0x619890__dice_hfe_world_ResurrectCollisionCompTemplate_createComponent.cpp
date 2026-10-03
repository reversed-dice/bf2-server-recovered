// FUNCTION: BF2 0x619890
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x619850(void*, void*);
void* fn_0x619890(void* self) {
    void* p = alloc_0x407508(0x40);
    ctor_0x619850(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ResurrectCollisionCompTemplate_createComponent (0x619890)
