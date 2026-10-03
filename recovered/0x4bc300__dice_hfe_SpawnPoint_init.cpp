// FUNCTION: BF2 0x4bc300
namespace dice { namespace hfe {
extern void fn_688b60(void);
void init_0x4bc300(void* self) {
    fn_688b60();
    if (*(void**)((char*)self + 0x50))
        return;
    void* mgr = *(void**)0x010b8c08;
    if (!((bool (*)(void*))(*(void***)mgr)[0x8a])(mgr)) {
        void* m = *(void**)0x010c42c0;
        ((void (*)(void*, void*, int))(*(void***)m)[0x6])(m, (char*)self + 0x218, -1);
    }
}
} }
