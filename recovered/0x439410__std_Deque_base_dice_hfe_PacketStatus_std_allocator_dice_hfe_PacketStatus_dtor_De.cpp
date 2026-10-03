// FUNCTION: BF2 0x439410
extern "C" void operator delete(void* p);
extern "C" void fn_004393c0(void* self, void* a, void* b);

extern "C" void fn_439410(void* self)
{
    if (*(void**)self) {
        fn_004393c0(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
