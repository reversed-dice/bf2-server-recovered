// FUNCTION: BF2 0x46d520
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x46d2f0(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
extern void ctor_0x0046d430(void* obj);
extern void dtor_0x46d790(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_46d520(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108c960);
    fn_0x004071c8((void*)0x46d2f0, 0, (void*)0xf66a88);
    ctor_0x0046d430((void*)0x108b7e0);
    fn_0x004071c8((void*)0x46d790, 0, (void*)0xf66a88);
    }
}
} }
