// FUNCTION: BF2 0x43eea0
extern "C" void operator delete(void* p);
extern "C" void fn_0043ee50(void* self, void* a, void* b);

extern "C" void fn_43eea0(void* self)
{
    if (*(void**)self) {
        fn_0043ee50(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
