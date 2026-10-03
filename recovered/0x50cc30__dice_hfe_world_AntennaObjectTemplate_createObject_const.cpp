// FUNCTION: BF2 0x50cc30
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x50a630(void*, void*);
void* fn_0x50cc30(void* self) {
    void* p = alloc_0x407508(0x270);
    ctor_0x50a630(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AntennaObjectTemplate_createObject_const (0x50cc30)
