// FUNCTION: BF2 0x6017b0
namespace dice { namespace hfe { namespace world {
void fireStop_0x6017b0(void* self) {
    if (*(char*)((char*)self + 0xa7) != 0) {
        void* a = *(void**)((char*)self + 0x48);
        if (a)
            ((void (*)(void*))(*(void***)a)[0xc])(a);
        void* b = *(void**)((char*)self + 0x40);
        if (b)
            ((void (*)(void*))(*(void***)b)[0xc])(b);
        void* c = *(void**)((char*)self + 0x50);
        if (c)
            ((void (*)(void*))(*(void***)c)[0xc])(c);
        *(char*)((char*)self + 0xa7) = 0;
    }
}
} } }
