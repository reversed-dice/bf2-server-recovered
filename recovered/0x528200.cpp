extern "C" void fn_527550(void*, void*);
extern "C" void fn_527510(void*, void*);
extern "C" void fn_573ec0(void*);

extern "C" void Kit_dtor_528200(void* self)
{
    *(void**)self = (void*)0xb445f0;
    *(void**)((char*)self + 0x100) = (void*)0xb44978;
    *(void**)((char*)self + 0x238) = (void*)0xb449b0;
    void* c1 = (char*)self + 0x288;
    fn_527550(c1, *(void**)((char*)c1 + 0x10));
    void* c2 = (char*)self + 0x258;
    fn_527510(c2, *(void**)((char*)c2 + 0x10));
    *(void**)self = (void*)0xb43730;
    *(void**)((char*)self + 0x100) = (void*)0xb43ab0;
    *(void**)((char*)self + 0x238) = (void*)0xb43ae8;
    fn_573ec0(self);
}
