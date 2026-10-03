// FUNCTION: BF2 0x441db0
extern "C" void operator delete(void* p);
extern "C" void fn_00441d60(void* self, void* a, void* b);

extern "C" void fn_441db0(void* self)
{
    if (*(void**)self) {
        fn_00441d60(self, *(void**)((char*)self + 0x28), (char*)*(void**)((char*)self + 0x48) + 8);
        operator delete(*(void**)self);
    }
}
