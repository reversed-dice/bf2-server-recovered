// FUNCTION: BF2 0x70a3f0
extern "C" void operator delete(void* p);

extern "C" void fn_70a3f0(void* self, void* node)
{
    if (!node)
        return;
    char* p = (char*)node;
    int n = 0;
    do {
        fn_70a3f0(self, *(void**)(p + 0x30));
        n++;
        p += 8;
    } while (n != 2);
    void* q = *(void**)((char*)node + 0x18);
    if (q)
        operator delete(q);
    operator delete(node);
}
