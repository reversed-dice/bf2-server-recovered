// FUNCTION: BF2 0x6b16d0
namespace dice { namespace hfe { namespace anim {
extern void* fn_407508(int a);
extern void fn_6b90f0(void* a, void* b, void* c);
void* createBundlePlayer_0x6b16d0(void* self, void* arg2, void* arg3) {
    void* p = fn_407508(0x60);
    fn_6b90f0(p, arg2, arg3);
    return p;
}
} } }
