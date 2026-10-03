// FUNCTION: BF2 0x636220
namespace dice { namespace hfe { namespace world {
extern "C" void* alloc_0x407508(unsigned long size);
extern "C" void ctor_0x635300(void*, void*);
void* fn_0x636220(void* self) {
    void* p = alloc_0x407508(0x248);
    ctor_0x635300(p, self);
    return p;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ForceObjectTemplate_createObject_const (0x636220)
