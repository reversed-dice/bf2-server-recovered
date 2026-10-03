extern "C" int fn_4071b8(void*);
extern "C" void fn_407e08(void*, void*, void*);
extern "C" void fn_407b88(void*);
extern "C" void fn_4071c8(void*, int, void*);

extern "C" const char* getName_7e59a0()
{
    if (*(char*)0x10aec60 == 0) {
        int r = fn_4071b8((void*)0x10aec60);
        if (!r) return (const char*)0x10aec70;
        char tmp;
        fn_407e08((void*)0x10aec70, (void*)0xbad290, &tmp);
        fn_407b88((void*)0x10aec60);
        fn_4071c8((void*)0x7e5a00, 0, (void*)0xf66a88);
    }
    return (const char*)0x10aec70;
}
