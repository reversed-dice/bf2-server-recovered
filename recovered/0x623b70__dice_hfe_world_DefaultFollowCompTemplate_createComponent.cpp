// FUNCTION: BF2 0x623b70
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x623b00(void*, void*);
void* fn_0x623b70(void* self) {
    void* p = alloc_0x407508(0x68);
    ctor_0x623b00(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultFollowCompTemplate_createComponent (0x623b70)
