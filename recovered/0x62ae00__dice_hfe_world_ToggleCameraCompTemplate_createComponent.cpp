// FUNCTION: BF2 0x62ae00
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x62ada0(void*, void*);
void* fn_0x62ae00(void* self) {
    void* p = alloc_0x407508(0x48);
    ctor_0x62ada0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ToggleCameraCompTemplate_createComponent (0x62ae00)
