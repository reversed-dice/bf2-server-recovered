// FUNCTION: BF2 0x782eb0
namespace dice { namespace hfe { namespace ai {
extern void fn_72fb50(void* a, void* b, void* c);
void getCameraBase_0x782eb0(void* self, void* out) {
    void* p = *(void**)((char*)self + 8);
    void* q = ((void* (*)(void*))(*(void***)p)[0x37])(p);
    fn_72fb50(out, (char*)*(void**)((char*)self + 0x10) + 0xc4, q);
}
} } }
