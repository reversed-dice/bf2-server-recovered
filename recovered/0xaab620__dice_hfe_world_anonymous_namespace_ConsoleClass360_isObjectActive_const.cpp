// FUNCTION: BF2 0xaab620
namespace dice { namespace hfe {
extern char localActiveObject;
void* fn_vcall(void* self);
bool cb_aab620() {
    *(int*)0x0112ee28 = 0x2;
    void* obj = *(void**)0x0112ee40;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0xa0);
    void* lVar1 = fn(obj);
    void* puVar2 = 0;
    if (lVar1 != 0) puVar2 = &localActiveObject;
    return puVar2 != 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass360_isObjectActive_const (0xaab620)
