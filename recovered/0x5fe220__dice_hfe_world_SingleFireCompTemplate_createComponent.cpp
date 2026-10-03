// FUNCTION: BF2 0x5fe220
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5fe190(void*, void*);
void* fn_0x5fe220(void* self) {
    void* p = alloc_0x407508(0x190);
    ctor_0x5fe190(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SingleFireCompTemplate_createComponent (0x5fe220)
