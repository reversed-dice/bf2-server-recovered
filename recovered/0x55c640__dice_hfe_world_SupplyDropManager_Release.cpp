// FUNCTION: BF2 0x55c640
namespace dice { namespace hfe {
struct V1 {
    virtual void v0();
    virtual void v8();
};
extern V1* g_obj_108eed8;
void f_0x55c640() {
    if (__builtin_expect(g_obj_108eed8 != 0, 1)) {
        g_obj_108eed8->v8();
        g_obj_108eed8 = 0;
    }
}
} }
