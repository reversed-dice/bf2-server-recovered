// FUNCTION: BF2 0x6b4490
namespace dice { namespace hfe { namespace anim {
extern void* fn_407508(int a);
extern void fn_407e78(void* a, void* b);
void* ctor_0x6b4490(void* self, void* arg2, void* arg3) {
    void* p = fn_407508(0x18);
    *(void**)((char*)p + 0x10) = *(void**)arg3;
    fn_407e78(p, arg2);
    return p;
}
} } }
