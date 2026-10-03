// FUNCTION: BF2 0xaaa990
namespace dice { namespace hfe {
extern char localActiveObjectTemplate;
void* fn_vcall(void* self);
bool cb_aaa990() {
    *(int*)0x0112ee24 = *(int*)0x01092c48;
    *(int*)0x0112ee20 = *(int*)0x01092c44;
    void* obj = *(void**)0x0112ee38;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x100);
    void* lVar1 = fn(obj);
    void* puVar2 = 0;
    if (lVar1 != 0) puVar2 = &localActiveObjectTemplate;
    return puVar2 != 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass440_isObjectActive_const (0xaaa990)
