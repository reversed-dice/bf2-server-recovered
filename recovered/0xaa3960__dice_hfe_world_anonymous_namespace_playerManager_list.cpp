// FUNCTION: BF2 0xaa3960
namespace dice { namespace hfe { namespace world {
extern void fn_4079d8(void* a, void* b);
extern void fn_4081b8(void* a, void* b, int c);
void* playerManager_list_0xaa3960(void* self) {
    *(void**)self = (void*)0xf6c6e8;
    void* mgr = *(void**)0x0112ee38;
    void* list = ((void* (*)(void*))(*(void***)mgr)[0xf])(mgr);
    void* it = *(void**)list;
    while (it != list) {
        void* p = *(void**)((char*)it + 0x10);
        void* name = ((void* (*)(void*))(*(void***)p)[0x9])(p);
        fn_4079d8(self, name);
        fn_4081b8(self, (void*)0xb89bd9, 1);
        it = *(void**)it;
    }
    return self;
}
} } }
