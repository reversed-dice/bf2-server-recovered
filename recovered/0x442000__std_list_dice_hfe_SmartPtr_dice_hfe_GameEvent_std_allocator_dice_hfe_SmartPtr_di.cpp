// FUNCTION: BF2 0x442000
namespace dice { namespace hfe {
extern void fn_407328(void* a);
extern void fn_4085b8(void* a);
void* dtor_0x442000(void* self, void* src) {
    void* old = *(void**)src;
    fn_407328(src);
    void* p = *(void**)((char*)src + 0x10);
    if (p) {
        ((void (*)(void*))(*(void***)p)[0x2])(p);
    }
    fn_4085b8(src);
    return old;
}
} }
