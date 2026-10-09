// FUNCTION: BF2 0x78bed0
extern "C" void fn_790830(void* a, void* b);

extern "C" void fn_78bed0(void* self)
{
    fn_790830(*(void**)((char*)self + 0x28), *(void**)((char*)self + 0x20));
    void* p = *(void**)((char*)self + 0x30);
    if (p) { ((void (*)(void*))(*(void***)p)[4])(p); }
    p = *(void**)((char*)self + 0x38);
    if (p) { ((void (*)(void*))(*(void***)p)[4])(p); }
    p = *(void**)((char*)self + 0x40);
    if (p) { ((void (*)(void*))(*(void***)p)[4])(p); }
    p = *(void**)((char*)self + 0x48);
    if (p) { ((void (*)(void*))(*(void***)p)[4])(p); }
    p = *(void**)((char*)self + 0x50);
    if (p) { ((void (*)(void*))(*(void***)p)[4])(p); }
    p = *(void**)((char*)self + 0x58);
    if (p) { ((void (*)(void*))(*(void***)p)[4])(p); }
}
