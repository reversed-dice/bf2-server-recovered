// FUNCTION: BF2 0x73f510
namespace dice { namespace hfe {
extern void fn_408198(void* a);
void dtor_0x73f510(void* self) {
    *(void**)self = (void*)0xb98950;
    void* p = *(void**)((char*)self + 0x18);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x2])(p);
    void* q = *(void**)((char*)self + 0x28);
    if (q)
        fn_408198(q);
}
} }
