// FUNCTION: BF2 0x7f1640
namespace dice { namespace hfe {
void setActive_0x7f1640(void* self, void* x) {
    void* f = *(void**)((char*)*(void***)self + 0x60);
    void* p = ((void* (*)(void*))(*(void***)self)[0x6])(self);
    ((void (*)(void*, void*))(f))(self, p);
}
} }
