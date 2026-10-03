// FUNCTION: BF2 0x510780
namespace dice { namespace hfe { namespace world {
extern void fn_589360(void* a, bool b);
void destroy_0x510780(void* self, bool v) {
    void* s = *(void**)0x010b8c08;
    ((void (*)(void*, void*))(*(void***)s)[0x5f])(s, self);
    void* s2 = *(void**)0x01092b00;
    if (s2)
        ((void (*)(void*, int, void*))(*(void***)s2)[0x13])(s2, 2, self);
    fn_589360(self, v);
}
} } }
