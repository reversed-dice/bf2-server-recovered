// FUNCTION: BF2 0x5e58a0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x5e5690(void*, void*);
void* fn_0x5e58a0(void* self) {
    void* p = alloc_0x407508(0x390);
    ctor_0x5e5690(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_createObject_const (0x5e58a0)
