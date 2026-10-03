// FUNCTION: BF2 0x6215d0
extern "C" bool fn_55f2f0(void* q);
extern "C" void operator delete(void* p);

extern "C" void fn_6215d0(void* self)
{
    void* p = *(void**)((char*)self + 0x30);
    if (p && *(void**)((char*)p + 8) && !fn_55f2f0(*(void**)((char*)p + 8))) {
        int* p2 = *(int**)((char*)self + 0x30);
        if (p2 && --*p2 == 0)
            operator delete(p2);
        *(void**)((char*)self + 0x30) = 0;
    }
}
