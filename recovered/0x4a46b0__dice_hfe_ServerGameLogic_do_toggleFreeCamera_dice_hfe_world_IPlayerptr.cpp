// FUNCTION: BF2 0x4a46b0
void f_4a46b0(void* self, char* p)
{
    if (p == 0)
        return;
    char* a = (char*)((void* (*)(void*))(*(void***)p)[0x150 / 8])(p);
    void* f = (*(void***)a)[0x118 / 8];
    char* b = (char*)((void* (*)(void*))(*(void***)p)[0x90 / 8])(p);
    void* v = ((void* (*)(void*))(*(void***)b)[0x108 / 8])(b);
    ((void (*)(void*, void*))f)(a, v);
    return ((void (*)(void*))(*(void***)p)[0x168 / 8])(p);
}
