// FUNCTION: BF2 0x7cf180
namespace dice { namespace hfe { namespace io {
extern void fn_4085b8(void* a);
extern void fn_7cf0d0(void* a);
void dtor_0x7cf180(void* self) {
    *(void**)self = (void*)0xbaabb0;
    void* p = *(void**)((char*)self + 0xa0);
    if (p)
        fn_4085b8(p);
    fn_4085b8(*(void**)((char*)self + 0xa8));
    fn_4085b8(*(void**)((char*)self + 0xb0));
    fn_4085b8(*(void**)((char*)self + 0xb8));
    fn_7cf0d0(self);
}
} } }
