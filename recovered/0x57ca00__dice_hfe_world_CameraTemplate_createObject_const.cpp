// FUNCTION: BF2 0x57ca00
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x57a0d0(void*, void*);
void* fn_0x57ca00(void* self) {
    void* p = alloc_0x407508(0x470);
    ctor_0x57a0d0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CameraTemplate_createObject_const (0x57ca00)
