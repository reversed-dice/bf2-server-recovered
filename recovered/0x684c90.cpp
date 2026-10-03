extern "C" void fn_684bf0(void*, void*);

extern "C" void getAllObjects_684c90(void* self, void* out)
{
    *(void**)((char*)self + 0x248) = out;
    void* n = *(void**)((char*)self + 0x10);
    if (n) {
        fn_684bf0(self, n);
    }
}
