// FUNCTION: BF2 0x5f9d40
namespace dice { namespace hfe { namespace world {
void* getProjectileOrigin_0x5f9d40(void* self) {
    void* p = *(void**)((char*)self + 0x18);
    void* q = ((void* (*)(void*))(*(void***)p)[0x70])(p);
    void* r = ((void* (*)(void*))(*(void***)q)[0x60])(q);
    void* t = 0;
    if (r)
        t = ((void* (*)(void*, int))(*(void***)r)[0x3])(r, *(int*)0x00c7d110);
    return ((void* (*)(void*))(*(void***)t)[0x21])(t);
}
} } }
