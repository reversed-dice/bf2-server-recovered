// FUNCTION: BF2 0x518620
namespace dice { namespace hfe { namespace world {
void* getCamera_0x518620(void* self) {
    void* r = ((void* (*)(void*))(*(void***)self)[0x3c])(self);
    while (r) {
        void* t = ((void* (*)(void*, int))(*(void***)r)[0x3])(r, *(int*)0x00c7d128);
        if (t)
            return r;
        r = *(void**)((char*)r + 0x58);
    }
    return 0;
}
} } }
