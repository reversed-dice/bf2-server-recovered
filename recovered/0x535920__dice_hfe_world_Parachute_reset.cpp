// FUNCTION: BF2 0x535920
extern "C" void operator delete(void* p);

extern "C" void fn_535920(void* self)
{
    *(int*)((char*)self + 0x600) = 0xbf800000;
    *(int*)((char*)self + 0x604) = 0;
    *(int*)((char*)self + 0x608) = 0;
    int* p = *(int**)((char*)self + 0x610);
    if (p && --*p == 0)
        operator delete(p);
    *(void**)((char*)self + 0x610) = 0;
}
