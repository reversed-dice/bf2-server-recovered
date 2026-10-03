// FUNCTION: BF2 0xaaa810
namespace dice { namespace hfe {
extern char ignoreLocalActiveObjectTemplate;
void* fn_vcall(void* self);
bool cb_aaa810() {
    void* obj = *(void**)0x0112ee40;
    void* vtable = *(void**)obj;
    void* (*fn)(void*) = *(void*(**)(void*))((char*)vtable + 0xa0);
    void* lVar1 = fn(obj);
    void* puVar2 = 0;
    if (lVar1 != 0) puVar2 = &ignoreLocalActiveObjectTemplate;
    return puVar2 != 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass371_isObjectActive_const (0xaaa810)
