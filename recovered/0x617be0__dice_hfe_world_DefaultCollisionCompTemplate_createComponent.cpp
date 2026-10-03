// FUNCTION: BF2 0x617be0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x617ba0(void*, void*);
void* fn_0x617be0(void* self) {
    void* p = alloc_0x407508(0x40);
    ctor_0x617ba0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultCollisionCompTemplate_createComponent (0x617be0)
