// FUNCTION: BF2 0x5fbee0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5fbd20(void*, void*);
void* fn_0x5fbee0(void* self) {
    void* p = alloc_0x407508(0x238);
    ctor_0x5fbd20(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireCompTemplate_createComponent (0x5fbee0)
