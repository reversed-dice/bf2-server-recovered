// FUNCTION: BF2 0xaab0b0
namespace dice { namespace hfe {
extern char localActiveObject;
void* fn_vcall(void* self);
bool cb_aab0b0() {
    *(int*)0x0112ee2c = 0x1;
    void* obj = *(void**)0x0112ee48;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0x120);
    void* lVar1 = fn(obj);
    void* puVar2 = 0;
    if (lVar1 != 0) puVar2 = &localActiveObject;
    return puVar2 != 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass280_isObjectActive_const (0xaab0b0)
