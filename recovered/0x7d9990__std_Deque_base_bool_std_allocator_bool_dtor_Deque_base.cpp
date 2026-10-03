// FUNCTION: BF2 0x7d9990
extern "C" void operator delete(void* p);
extern "C" void fn_007d9940(void* self, void* a, void* b);

extern "C" void fn_7d9990(void* self)
{
    if (*(void**)self) {
        fn_007d9940(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
