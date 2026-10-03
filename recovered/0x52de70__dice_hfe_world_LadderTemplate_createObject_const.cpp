// FUNCTION: BF2 0x52de70
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5298f0(void*, void*);
void* fn_0x52de70(void* self) {
    void* p = alloc_0x407508(0x258);
    ctor_0x5298f0(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LadderTemplate_createObject_const (0x52de70)
