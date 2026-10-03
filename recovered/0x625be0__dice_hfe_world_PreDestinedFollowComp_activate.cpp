// FUNCTION: BF2 0x625be0
extern "C" void operator delete(void* p);

extern "C" void fn_625be0(void* self)
{
    int* p = *(int**)((char*)self + 0x38);
    if (p && --*p == 0)
        operator delete(p);
    *(void**)((char*)self + 0x38) = 0;
    *(char*)((char*)self + 0x44) = 1;
}
