typedef void (*vfn1)(void*);

extern "C" void popEvent_73cef0(void* self)
{
    void* n = *(void**)((char*)self + 0x18);
    if (n) {
        *(void**)((char*)self + 0x18) = *(void**)((char*)n + 0x20);
        ((vfn1)(*(void***)n)[0x10/8])(n);
    }
}
