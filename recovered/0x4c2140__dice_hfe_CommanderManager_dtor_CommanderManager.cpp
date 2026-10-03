// FUNCTION: BF2 0x4c2140
extern "C" void _ZdlPv(void* p);
extern "C" void std_Rb_tree_M_erase(void* t, void* node);

void dtor_4c20b0(void* self) {
    void* p = *(void**)((char*)self + 0x40);
    *(void**)self = (void*)0xb38530;
    if (p != 0) {
        void* q = *(void**)((char*)p + 8);
        if (q != 0) {
            void* game = *(void**)0x10c5420;
            ((void (*)(void*, void*))(*(void***)game)[0x28])(game, q);
        }
    }
    int* pc = *(int**)((char*)self + 0x40);
    if (pc != 0) {
        int v = *pc - 1;
        *pc = v;
        if (v == 0) {
            _ZdlPv(pc);
        }
    }
    void* tb = (char*)self + 0x10;
    *(void**)((char*)self + 0x40) = 0;
    std_Rb_tree_M_erase(tb, *(void**)((char*)tb + 0x10));
}
