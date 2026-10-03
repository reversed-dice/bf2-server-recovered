// FUNCTION: BF2 0x6dcda0
namespace dice { namespace hfe {
void f_0x6dcda0(void* self, int a2) {
    do {
        void* p = *(void**)((char*)self + 0x88);
        if (p)
            ((void (*)(void*, int))(*(void***)p)[0x6d])(p, a2);
        void* q = *(void**)((char*)self + 0x58);
        if (q)
            f_0x6dcda0(q, a2);
        self = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
    } while (self);
}
} }
