// FUNCTION: BF2 0x61aae0
extern "C" void fn_617130(void* a, void* b);
extern "C" void operator delete(void* p);

extern "C" void fn_61aa70(void* self)
{
    void* r18 = *(void**)((char*)self + 0x18);
    *(void**)self = (void*)0xb7c790;
    *(void**)((char*)self + 0x20) = (void*)0xb7c888;
    if (r18) {
        void* g2 = *(void**)0x1091b20;
        if (g2)
            fn_617130(g2, r18);
    }
    int* p = *(int**)((char*)self + 0x40);
    if (p && --*p == 0)
        operator delete(p);
    *(void**)((char*)self + 0x20) = (void*)0xb7bbf0;
    *(void**)self = (void*)0xb7bcb0;
}
