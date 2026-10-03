extern "C" void set_4f4ac0(void*, int);
extern "C" void set_4f4af0(void*, int);
typedef void (*vfn1)(void*);

extern "C" void close_4f1c50(void* self)
{
    void* p = *(void**)((char*)self + 0x68);
    if (p) {
        ((vfn1)(*(void***)p)[0x10/8])(p);
        *(void**)((char*)self + 0x68) = 0;
    }
    p = *(void**)((char*)self + 0x70);
    if (p) {
        ((vfn1)(*(void***)p)[0x10/8])(p);
        *(void**)((char*)self + 0x70) = 0;
    }
    *(char*)((char*)self + 0xa8) = 0;
    *(char*)((char*)self + 0x88) = 0;
    p = *(void**)((char*)self + 0xa0);
    if (p) {
        set_4f4ac0(p, 0);
        set_4f4af0(*(void**)((char*)self + 0xa0), 0);
    }
}
