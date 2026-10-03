// FUNCTION: BF2 0x5157f0
namespace dice { namespace hfe {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x4bbe20(void*, void*);
void* fn_0x4bd960(void* self) {
    void* p = alloc_0x407508(0x240);
    ctor_0x4bbe20(p, self);
    return p;
}
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_createObject_const (0x4bd960)
