// FUNCTION: BF2 0x5e3640
namespace dice { namespace hfe { namespace world {
void projectileWasReset_0x5e3640(void* self, void* proj) {
    void* p = *(void**)((char*)self + 0x290);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x17])(p);
    void* q = *(void**)((char*)self + 0x2c0);
    if (q)
        ((void (*)(void*, void*))(*(void***)q)[0x17])(q, proj);
}
} } }
