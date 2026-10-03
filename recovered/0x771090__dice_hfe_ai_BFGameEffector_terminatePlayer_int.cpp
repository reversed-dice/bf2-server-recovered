// FUNCTION: BF2 0x771090
namespace dice { namespace hfe { namespace ai {
bool terminatePlayer_0x771090(void* self, int n) {
    void* s = *(void**)0x010c5420;
    void* p = 0;
    if (s)
        p = ((void* (*)(void*, int))(*(void***)s)[0x3])(s, *(int*)0x00c76024);
    void* fn = (*(void***)p)[0xa];
    void* s2 = *(void**)0x0112ee38;
    void* r = ((void* (*)(void*, int))(*(void***)s2)[0x8])(s2, n);
    return ((bool (*)(void*, void*))fn)(p, r);
}
} } }
