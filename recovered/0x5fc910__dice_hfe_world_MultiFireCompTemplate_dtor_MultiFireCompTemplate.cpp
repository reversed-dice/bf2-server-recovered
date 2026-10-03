// FUNCTION: BF2 0x5fc910
extern "C" void _ZdlPv(void* p);
extern "C" void std_List_base_M_clear(void* l);

struct E4 { int v; ~E4() {} };

void dtor_5fc910(void* self) {
    *(void* volatile*)self = (void*)0xb74710;
    *(void* volatile*)((char*)self + 8) = (void*)0xb74798;
    std_List_base_M_clear((char*)self + 0x98);
    *(void* volatile*)self = (void*)0xb73770;
    *(void* volatile*)((char*)self + 8) = (void*)0xb737f8;
    char* v = (char*)self + 0x38;
    E4* b = *(E4* volatile*)(v + 0);
    E4* e = *(E4* volatile*)(v + 8);
    for (E4* p = b; p != e; ++p) {}
    void* bb = *(void* volatile*)(v + 0);
    if (bb != 0) {
        _ZdlPv(bb);
    }
}
