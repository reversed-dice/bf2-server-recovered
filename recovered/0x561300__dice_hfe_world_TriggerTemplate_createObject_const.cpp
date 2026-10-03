// FUNCTION: BF2 0x561300
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x561250(void*, void*);
void* fn_0x561300(void* self) {
    void* p = alloc_0x407508(0x290);
    ctor_0x561250(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_TriggerTemplate_createObject_const (0x561300)
