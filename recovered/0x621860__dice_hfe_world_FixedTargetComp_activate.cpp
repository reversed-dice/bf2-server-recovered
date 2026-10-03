// FUNCTION: BF2 0x621860
extern "C" void operator delete(void* p);

extern "C" void fn_621860(void* self)
{
    int* p = *(int**)((char*)self + 0x30);
    if (p && --*p == 0)
        operator delete(p);
    *(void**)((char*)self + 0x30) = 0;
}
