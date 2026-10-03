// FUNCTION: BF2 0x634cf0
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int a);
extern void fn_637420(void* a, void* b, void* c);
void setPhysics_0x634cf0(void* self, void* tmpl) {
    void* p = fn_407508(0x260);
    fn_637420(p, self, tmpl);
    ((void (*)(void*, void*))(*(void***)p)[0xa])(p, tmpl);
    ((void (*)(void*, int, void*))(*(void***)tmpl)[0x16])(tmpl, *(int*)0x00c965c0, p);
    ((void (*)(void*))(*(void***)p)[0x2])(p);
    void* s = *(void**)0x01140ad0;
    ((void (*)(void*, void*))(*(void***)s)[0x7])(s, p);
}
} } }
