// FUNCTION: BF2 0x7f15f0
namespace dice { namespace hfe {
void deleteControlMap_0x7f15f0(void* self, void* x) {
    void* f = *(void**)((char*)*(void***)self + 0x50);
    void* p = ((void* (*)(void*))(*(void***)self)[0x7])(self);
    ((void (*)(void*, void*))(f))(self, p);
}
} }
