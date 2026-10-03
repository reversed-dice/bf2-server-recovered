// FUNCTION: BF2 0x603940
namespace dice { namespace hfe { namespace world {
extern void* fn_6038b0(void);
void preCache_0x603940(void* self) {
    void* p = fn_6038b0();
    if (!p)
        return;
    void* q = ((void* (*)(void*))(*(void***)p)[0x15])(p);
    if (!q)
        return;
    ((void (*)(void*))(*(void***)q)[0x8])(q);
    ((void (*)(void*))(*(void***)q)[0xe])(q);
}
} } }
