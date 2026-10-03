// FUNCTION: BF2 0x5f1190
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5f1120(void*, void*);
void* fn_0x5f1190(void* self) {
    void* p = alloc_0x407508(0x80);
    ctor_0x5f1120(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierDeviationCompTemplate_createComponent (0x5f1190)
