// FUNCTION: BF2 0x470c10
extern "C" void operator delete(void* p);
extern "C" void fn_00470bc0(void* self, void* a, void* b);

extern "C" void fn_470c10(void* self)
{
    if (*(void**)self) {
        fn_00470bc0(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
