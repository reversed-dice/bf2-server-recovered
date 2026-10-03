// FUNCTION: BF2 0x57dca0
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x57d070(void*, void*);
void* fn_0x57dca0(void* self) {
    void* p = alloc_0x407508(0x248);
    ctor_0x57d070(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EntryPointTemplate_createObject_const (0x57dca0)
