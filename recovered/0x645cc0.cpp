extern "C" void* fn_645c40(void*, void*);

extern "C" void* NextSiblingElement_645cc0(void* self, void* name)
{
    void* n = fn_645c40(self, name);
    while (n) {
        if (*(int*)((char*)n + 0x20) == 1) {
            return n;
        }
        n = fn_645c40(n, name);
    }
    return 0;
}
