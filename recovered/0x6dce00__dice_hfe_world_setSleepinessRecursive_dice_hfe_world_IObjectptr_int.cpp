// FUNCTION: BF2 0x6dce00
namespace dice { namespace hfe {
void f_0x6dce00(void* self, int a2) {
    do {
        void* p = *(void**)((char*)self + 0x88);
        if (p)
            ((void (*)(void*, int))(*(void***)p)[0x49])(p, a2);
        void* q = *(void**)((char*)self + 0x58);
        if (q)
            f_0x6dce00(q, a2);
        self = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
    } while (self);
}
} }
