// FUNCTION: BF2 0x7c4820
namespace dice { namespace hfe {
void deleteInfo_0x7c4820(void* self, void* x) {
    void* f = *(void**)((char*)*(void***)self + 0x40);
    void* p = ((void* (*)(void*))(*(void***)self)[0x4])(self);
    ((void (*)(void*, void*))(f))(self, p);
}
} }
