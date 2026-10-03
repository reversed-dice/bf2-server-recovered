// FUNCTION: BF2 0x44ae10
extern "C" void operator delete(void* p);
extern "C" void fn_0044adc0(void* self, void* a, void* b);

extern "C" void fn_44ae10(void* self)
{
    if (*(void**)self) {
        fn_0044adc0(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
