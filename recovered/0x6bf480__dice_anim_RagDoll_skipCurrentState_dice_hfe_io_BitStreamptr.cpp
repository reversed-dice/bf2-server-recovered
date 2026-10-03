// FUNCTION: BF2 0x6bf480
namespace dice { namespace hfe { namespace anim {
extern void fn_79e920(void* a, void* b, int c);
extern void fn_79eb30(void* a, int b);
void skipCurrentState_0x6bf480(void* self, void* arg2) {
    int v = 0;
    fn_79e920(self, &v, 9);
    fn_79eb30(self, v);
}
} } }
