// FUNCTION: BF2 0x6038e0
namespace dice { namespace hfe { namespace world {
void destroy_0x6038e0(void* self) {
    void* p = *(void**)((char*)self + 0x90);
    if (p) {
        void* server = *(void**)0x010c5420;
        ((void (*)(void*, void*))(*(void***)server)[0x28])(server, p);
        ((void (*)(void*, int, int, int))(*(void***)self)[0x2c])(self, 0, 0, 0);
    }
}
} } }
