// FUNCTION: BF2 0x63bb90
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x63b980(void*, void*);
void* fn_0x63bb90(void* self) {
    void* p = alloc_0x407508(0x280);
    ctor_0x63b980(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpringTemplate_createObject_const (0x63bb90)
