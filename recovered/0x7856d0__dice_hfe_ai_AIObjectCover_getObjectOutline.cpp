// FUNCTION: BF2 0x7856d0
namespace dice { namespace hfe { namespace ai {
void getObjectOutline_0x7856d0(void* self, void* out) {
    void* a = *(void**)((char*)self + 0x10);
    void* p = *(void**)((char*)self + 8);
    void* q = *(void**)((char*)a + 8);
    void* f = *(void**)((char*)*(void***)q + 0x10);
    void* r = ((void* (*)(void*))(*(void***)p)[0x37])(p);
    ((void (*)(void*, void*))(f))(q, r);
}
} } }
