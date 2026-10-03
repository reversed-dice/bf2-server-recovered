// FUNCTION: BF2 0x558d70
namespace dice { namespace hfe { namespace world {
extern void fn_589360(void* a, bool b);
void destroy_0x558d70(void* self, bool a) {
    void* m = *(void**)0x0112ee48;
    ((void (*)(void*, void*))(*(void***)m)[0x35])(m, self);
    void* ai = *(void**)0x010b8c08;
    ((void (*)(void*, void*))(*(void***)ai)[0x7d])(ai, self);
    fn_589360(self, a);
}
} } }
