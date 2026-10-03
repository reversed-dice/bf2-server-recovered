// FUNCTION: BF2 0x4fb650
namespace dice { namespace hfe { namespace python {
void* pers_gamespyStatsNewGame_0x4fb650(void) {
    void* g = *(void**)0x010c5420;
    void* r = 0;
    if (g)
        r = ((void* (*)(void*, int))(*(void***)g)[0x3])(g, *(int*)0x00c76024);
    void* p = ((void* (*)(void*))(*(void***)r)[0x1d])(r);
    ((void (*)(void*))(*(void***)p)[0x6])(p);
    (*(int*)0x00f6c850)++;
    return (void*)0xf6c850;
}
} } }
