// FUNCTION: BF2 0x533720
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5335b0(void*, void*);
void* fn_0x533720(void* self) {
    void* p = alloc_0x407508(0x238);
    ctor_0x5335b0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ObstacleTemplate_createObject_const (0x533720)
