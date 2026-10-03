// FUNCTION: BF2 0x7dbf60
namespace dice { namespace hfe { namespace io {
extern void fn_7db9c0(void* a);
extern void fn_7db980(void* a);
void dtor_0x7dbef0(void* self) {
    *(void**)self = (void*)0xbabcb0;
    *(void**)((char*)self + 8) = (void*)0xbabd88;
    *(void**)((char*)self + 0x10) = (void*)0xbabe10;
    fn_7db9c0(self);
    fn_7db980((char*)self + 0x50);
    fn_7db980((char*)self + 0x38);
    void* a = *(void**)((char*)self + 0x30);
    if (a)
        ((void (*)(void*))(*(void***)a)[0x2])(a);
    void* b = *(void**)((char*)self + 0x28);
    if (b)
        ((void (*)(void*))(*(void***)b)[0x2])(b);
    void* c = *(void**)((char*)self + 0x20);
    if (c)
        ((void (*)(void*))(*(void***)c)[0x2])(c);
}
} } }
