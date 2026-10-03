// FUNCTION: BF2 0x50f3b0
namespace dice { namespace hfe {
extern void* fn_407508(int a);
extern void fn_50f050(void* a, int b);
void init_0x50f3b0(void* self) {
    void* p = *(void**)self;
    if (p)
        ((void (*)(void*))(*(void***)p)[0x1])(p);
    void* q = *(void**)((char*)self + 8);
    if (q)
        ((void (*)(void*))(*(void***)q)[0x1])(q);
    void* e1 = fn_407508(0x48);
    fn_50f050(e1, 1);
    *(void**)self = e1;
    void* e2 = fn_407508(0x48);
    fn_50f050(e2, 2);
    *(void**)((char*)self + 8) = e2;
}
} }
