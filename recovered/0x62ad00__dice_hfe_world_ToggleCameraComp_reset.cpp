// FUNCTION: BF2 0x62ad00
extern "C" void operator delete(void* p);

extern "C" void fn_62ad00(void* self)
{
    int* p = *(int**)((char*)self + 0x38);
    if (p && --*p == 0)
        operator delete(p);
    *(void**)((char*)self + 0x38) = 0;
}
