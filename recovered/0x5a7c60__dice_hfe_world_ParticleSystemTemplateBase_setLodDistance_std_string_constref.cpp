// FUNCTION: BF2 0x5a7c60
extern "C" int fn_748b70(void* a, void* b);

extern "C" void fn_5a7c60(void* self, void* arg)
{
    void** table = (void**)0xf678c0;
    int i = 0;
    while (i < 3) {
        if (fn_748b70(*(void**)((char*)arg), table[i]) == 0)
            break;
        i++;
    }
    if (i == 3)
        return;
    void* obj = *(void**)((char*)self + 0x80);
    if (obj) {
        void** vt = *(void***)obj;
        ((void (*)(void*, int))vt[7])(obj, i);
    }
}
