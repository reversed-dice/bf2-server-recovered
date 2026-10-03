// FUNCTION: BF2 0x7b66b0
extern "C" void operator delete(void* p);
extern "C" void fn_007b6660(void* self, void* a, void* b);

extern "C" void fn_7b66b0(void* self)
{
    if (*(void**)self) {
        fn_007b6660(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
