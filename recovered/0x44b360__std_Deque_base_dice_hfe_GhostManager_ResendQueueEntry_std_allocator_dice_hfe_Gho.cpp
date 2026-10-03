// FUNCTION: BF2 0x44b360
extern "C" void operator delete(void* p);
extern "C" void fn_0044b310(void* self, void* a, void* b);

extern "C" void fn_44b360(void* self)
{
    if (*(void**)self) {
        fn_0044b310(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
