// FUNCTION: BF2 0x5e2a10
namespace dice { namespace hfe { namespace world {
int getOwnerId_0x5e2a10(void* self) {
    void* p = ((void* (*)(void*))(*(void***)self)[0x70])(self);
    if (!p)
        return -1;
    void* q = ((void* (*)(void*))(*(void***)self)[0x70])(self);
    return ((int (*)(void*))(*(void***)q)[0x15])(q);
}
} } }
