// FUNCTION: BF2 0x44b030
extern "C" void operator delete(void* p);
extern "C" void fn_0044afe0(void* self, void* a, void* b);

extern "C" void fn_44b030(void* self)
{
    if (*(void**)self) {
        fn_0044afe0(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
