// FUNCTION: BF2 0x57ddc0
namespace dice { namespace hfe { namespace world {
extern void fn_589360(void* a, bool b);
void destroy_0x57ddc0(void* self, bool v) {
    if (((bool (*)(void*))(*(void***)self)[0xf])(self))
        return;
    void* s = *(void**)0x010b8c08;
    ((void (*)(void*, void*))(*(void***)s)[0x67])(s, self);
    fn_589360(self, v);
}
} } }
