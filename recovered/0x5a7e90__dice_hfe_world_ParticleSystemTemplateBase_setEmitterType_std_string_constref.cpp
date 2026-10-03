// FUNCTION: BF2 0x5a7e90
extern "C" int fn_748b70(void* a, void* b);
extern "C" void fn_408238(void* self, void* arg);

extern "C" void fn_5a7e90(void* self, void* arg)
{
    void** table = (void**)0xf67900;
    int i = 0;
    while (i < 4) {
        if (fn_748b70(*(void**)((char*)arg), table[i]) == 0)
            break;
        i++;
    }
    if (i != 4) {
        *(int*)((char*)self + 0x68) = i;
        fn_408238((char*)self + 0x70, arg);
    }
    void* obj = *(void**)((char*)self + 0x80);
    if (obj) {
        void** vt = *(void***)obj;
        ((void (*)(void*, int))vt[0x11])(obj, *(int*)((char*)self + 0x68));
    }
}
