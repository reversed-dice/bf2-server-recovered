// FUNCTION: BF2 0x585260
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x584640(void*, void*);
void* fn_0x585260(void* self) {
    void* p = alloc_0x407508(0x378);
    ctor_0x584640(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCameraTemplate_createObject_const (0x585260)
