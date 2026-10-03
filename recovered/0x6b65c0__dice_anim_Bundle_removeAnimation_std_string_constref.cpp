// FUNCTION: BF2 0x6b65c0
namespace dice { namespace hfe { namespace anim {
extern void* fn_6b63b0(void* a, void* b);
extern void fn_6b83d0(void* a, void* b);
extern void fn_6b64f0(void* a);
void removeAnimation_0x6b65c0(void* self, void* arg2) {
    void* p = fn_6b63b0(self, arg2);
    if (p != self) {
        fn_6b83d0(self, p);
        fn_6b64f0(self);
    }
}
} } }
