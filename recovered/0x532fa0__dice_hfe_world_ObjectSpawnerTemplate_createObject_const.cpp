// FUNCTION: BF2 0x532fa0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x530df0(void*, void*);
void* fn_0x532fa0(void* self) {
    void* p = alloc_0x407508(0x328);
    ctor_0x530df0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_createObject_const (0x532fa0)
