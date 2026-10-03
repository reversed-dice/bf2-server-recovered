// FUNCTION: BF2 0x78bf50
namespace dice { namespace hfe { namespace ai {
void aiObjectUpdate_0x78bf50(void* self) {
    void* p = *(void**)((char*)self + 0x30);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x5])(p);
    p = *(void**)((char*)self + 0x38);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x5])(p);
    p = *(void**)((char*)self + 0x40);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x5])(p);
    p = *(void**)((char*)self + 0x48);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x5])(p);
    p = *(void**)((char*)self + 0x50);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x5])(p);
    p = *(void**)((char*)self + 0x58);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x5])(p);
}
} } }
