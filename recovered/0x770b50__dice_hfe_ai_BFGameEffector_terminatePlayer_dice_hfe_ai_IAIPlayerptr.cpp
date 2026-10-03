// FUNCTION: BF2 0x770b50
namespace dice { namespace hfe { namespace ai {
bool terminatePlayer_0x770b50(void* self, void* obj) {
    void* s = *(void**)0x010c5420;
    void* p = 0;
    if (s)
        p = ((void* (*)(void*, int))(*(void***)s)[0x3])(s, *(int*)0x00c76024);
    void* fn = (*(void***)p)[0xa];
    void* r = ((void* (*)(void*))(*(void***)obj)[0x3])(obj);
    return ((bool (*)(void*, void*))fn)(p, r);
}
} } }
