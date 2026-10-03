// FUNCTION: BF2 0x642280
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x641980(void*, void*);
void* fn_0x642280(void* self) {
    void* p = alloc_0x407508(0x28);
    ctor_0x641980(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_createComponent (0x642280)
