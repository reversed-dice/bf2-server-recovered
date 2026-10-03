// FUNCTION: BF2 0x44e620
extern "C" void operator delete(void* p);
extern "C" void fn_0044e5d0(void* self, void* a, void* b);

extern "C" void fn_44e620(void* self)
{
    if (*(void**)self) {
        fn_0044e5d0(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
