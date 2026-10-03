// FUNCTION: BF2 0x7e47a0
namespace dice { namespace hfe { namespace io {
extern void fn_407328(void* a);
extern void fn_7def40(void* a);
extern void fn_4085b8(void* a);
void* dtor_0x7e47a0(void* self, void* src) {
    void* old = *(void**)src;
    fn_407328(src);
    fn_7def40((char*)src + 0x10);
    fn_4085b8(src);
    return old;
}
} } }
