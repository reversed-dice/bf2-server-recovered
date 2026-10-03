// FUNCTION: BF2 0x657260
namespace dice { namespace hfe {
int cbCompleted_0x657260(void* a, int flag, void* b, void* d, void* c) {
    if (flag == 0)
        ((void (*)(void*, void*))(*(void***)c)[0x9])(c, b);
    else
        ((void (*)(void*))(*(void***)c)[0xa])(c);
    return 1;
}
} }
