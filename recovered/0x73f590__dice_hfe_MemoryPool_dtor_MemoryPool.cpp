// FUNCTION: BF2 0x73f590
namespace dice { namespace hfe {
extern void fn_408198(void* a);
extern void fn_4085b8(void* a);
void dtor_0x73f590(void* self) {
    *(void**)self = (void*)0xb98950;
    void* p = *(void**)((char*)self + 0x18);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x2])(p);
    void* q = *(void**)((char*)self + 0x28);
    if (q)
        fn_408198(q);
    fn_4085b8(self);
}
} }
