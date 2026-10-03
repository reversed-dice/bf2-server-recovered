// FUNCTION: BF2 0x41a340
extern "C" void operator delete(void* p);
extern "C" void fn_0041a2f0(void* self, void* a, void* b);

extern "C" void fn_41a340(void* self)
{
    if (*(void**)self) {
        fn_0041a2f0(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
