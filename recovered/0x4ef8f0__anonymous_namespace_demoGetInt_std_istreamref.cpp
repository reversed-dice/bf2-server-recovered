// FUNCTION: BF2 0x4ef8f0
namespace dice { namespace hfe { namespace anonymous_namespace {
extern void* fn_407848(void* a);
extern void fn_4081f8(void* a, void* b);
int demoGetInt_0x4ef8f0(void* s) {
    int v = 0;
    void* p = fn_407848(s);
    fn_4081f8(p, &v);
    return v;
}
} } }
