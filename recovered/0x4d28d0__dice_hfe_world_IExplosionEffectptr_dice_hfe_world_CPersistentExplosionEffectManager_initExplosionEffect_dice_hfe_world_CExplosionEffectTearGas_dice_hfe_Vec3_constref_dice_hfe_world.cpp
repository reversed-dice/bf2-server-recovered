// FUNCTION: BF2 0x4d28d0
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int a);
extern void fn_4d2240(void* a, void* b, void* c);
extern void fn_407e78(void* a, void* b);
void* ctor_0x4d28d0(void* self, void* arg2, void* arg3) {
    void* p = fn_407508(8);
    fn_4d2240(p, arg2, arg3);
    void* q = fn_407508(0x18);
    *(void**)((char*)q + 0x10) = p;
    fn_407e78(q, self);
    return p;
}
} } }
