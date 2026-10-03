// FUNCTION: BF2 0x7c4860
namespace dice { namespace hfe {
void deleteInfo_0x7c4860(void* self, void* x) {
    void* f = *(void**)((char*)*(void***)self + 0x40);
    void* p = ((void* (*)(void*))(*(void***)self)[0x5])(self);
    ((void (*)(void*, void*))(f))(self, p);
}
} }
