// FUNCTION: BF2 0x50a4b0
extern "C" void fn_6c5d30(void*);
extern "C" void fn_4085b8(void*);
extern "C" void fn_58b170(void*);
extern "C" void target_50a510(void* self)
{
    *(void**)((char*)self + 0) = (void*)0xb3d950;
    *(void**)((char*)self + 0x100) = (void*)0xb3dc60;
    void* x = *(void**)((char*)self + 0x238);
    if (x) {
        fn_6c5d30(x);
        fn_4085b8(x);
    }
    fn_58b170(self);
}
