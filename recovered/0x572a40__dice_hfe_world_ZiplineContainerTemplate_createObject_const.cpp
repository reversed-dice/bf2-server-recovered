// FUNCTION: BF2 0x572a40
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x56b110(void*, void*);
void* fn_0x572a40(void* self) {
    void* p = alloc_0x407508(0x698);
    ctor_0x56b110(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZiplineContainerTemplate_createObject_const (0x572a40)
