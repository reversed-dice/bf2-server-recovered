typedef void (*vfn8)(void*);

extern "C" void removeAll_50eb20(void* self)
{
    void* a = *(void**)self;
    if (a) ((vfn8)(*(void***)a)[0x8/8])(a);
    void* b = *(void**)((char*)self + 0x8);
    if (b) ((vfn8)(*(void***)b)[0x8/8])(b);
    *(void**)self = 0;
    *(void**)((char*)self + 0x8) = 0;
}
