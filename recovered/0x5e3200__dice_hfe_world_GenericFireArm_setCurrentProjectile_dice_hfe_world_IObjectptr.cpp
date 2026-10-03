// FUNCTION: BF2 0x5e3200
namespace dice { namespace hfe { namespace world {
void setCurrentProjectile_0x5e3200(void* self, void* proj) {
    void* p = *(void**)((char*)self + 0x2c0);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x2c])(p);
    void* q = *(void**)((char*)self + 0x290);
    if (q)
        ((void (*)(void*, void*))(*(void***)q)[0x2f])(q, proj);
}
} } }
