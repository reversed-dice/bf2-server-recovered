// FUNCTION: BF2 0x50e900
extern "C" void _ZdlPv(void* p);
extern "C" void std_List_base_M_clear(void* l);

void dtor_50e900(void* self) {
    void* p = *(void**)((char*)self + 0x20);
    *(void**)self = (void*)0xb3e8d0;
    if (p != 0) {
        void* q = *(void**)((char*)p + 8);
        if (q != 0) {
            void* game = *(void**)0x10c5420;
            ((void (*)(void*, void*))(*(void***)game)[0x28])(game, q);
        }
    }
    int* pc = *(int**)((char*)self + 0x20);
    if (pc != 0) {
        int v = *pc - 1;
        *pc = v;
        if (v == 0) {
            _ZdlPv(pc);
        }
    }
    std_List_base_M_clear((char*)self + 8);
    _ZdlPv(self);
}
