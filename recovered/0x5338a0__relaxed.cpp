// FUNCTION: BF2 0x5338a0
namespace dice { namespace hfe { namespace world {
extern void fn_4085b8(void* a);
void dtor_0x5338a0(void* self) {
    void* a = *(void**)self;
    if (a) {
        void* b = *(void**)((char*)a + 8);
        if (b) {
            void* server = *(void**)0x010c5420;
            ((void (*)(void*, void*))(*(void***)server)[0x28])(server, b);
        }
    }
    void* mgr = *(void**)0x01092b00;
    ((void (*)(void*, void*, void*, int))(*(void***)mgr)[0x14])(mgr, (void*)1, *(void**)((char*)self + 8), *(int*)((char*)self + 0x10));
    void* p = *(void**)self;
    if (p) {
        int n = *(int*)p - 1;
        *(int*)p = n;
        if (n == 0) {
            fn_4085b8(p);
            return;
        }
    }
}
} } }
