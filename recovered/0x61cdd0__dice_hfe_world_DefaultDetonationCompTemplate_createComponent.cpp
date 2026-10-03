// FUNCTION: BF2 0x61cdd0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x61cce0(void*, void*);
void* fn_0x61cdd0(void* self) {
    void* p = alloc_0x407508(0x58);
    ctor_0x61cce0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationCompTemplate_createComponent (0x61cdd0)
