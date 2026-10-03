// FUNCTION: BF2 0x6980b0
namespace dice { namespace hfe {
extern void fn_407328(void* a);
extern void fn_4085b8(void* a);
void* dtor_0x6980b0(void* self, void* src) {
    void* old = *(void**)src;
    fn_407328(src);
    void* p = *(void**)((char*)src + 0x18);
    if (p) {
        int r = *(int*)p - 1;
        *(int*)p = r;
        if (!r)
            fn_4085b8(p);
    }
    fn_4085b8(src);
    return old;
}
} }
