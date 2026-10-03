// FUNCTION: BF2 0x7841e0
namespace dice { namespace hfe { namespace ai {
void init_0x7841e0(void* self) {
    void* p = *(void**)((char*)self + 8);
    void* q = ((void* (*)(void*))(*(void***)p)[0x8])(p);
    void* r = ((void* (*)(void*, int))(*(void***)q)[0x3])(q, *(int*)0x00c7ce6c);
    void* s = *(void**)((char*)self + 0x10);
    ((void (*)(void*, void*))(*(void***)s)[0x5])(s, *(void**)((char*)self + 8));
}
} } }
