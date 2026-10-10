// FUNCTION: BF2 0x4a5f90
extern "C" unsigned int IID_IPlayerControlObject;
extern "C" void* _ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void*);
int f_4a5f90(char* self, char* obj)
{
    if (obj == 0)
        return 1;
    char* pco;
    for (;;) {
        pco = (char*)((void* (*)(void*, unsigned int))(*(void***)obj)[3])(obj, IID_IPlayerControlObject);
        if (pco != 0)
            break;
        obj = *(char**)(obj + 0x50);
        if (obj == 0)
            return 1;
    }
    char* m = (char*)((void* (*)(void*))(*(void***)pco)[0xc0 / 8])(pco);
    char* end = m + 8;
    char* n = *(char**)(m + 0x18);
    if (n == end)
        return 1;
    do {
        char* it = *(char**)(n + 0x28);
        void* v = ((void* (*)(void*))(*(void***)it)[0x20 / 8])(it);
        if (v != 0)
            ((void (*)(void*, void*, int, int))(*(void***)self)[0xd8 / 8])(self, v, 1, 0);
        n = (char*)_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(n);
    } while (n != end);
    return 1;
}
