// FUNCTION: BF2 0x43a630
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x43a620(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_43a630(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108b3c4);
    fn_0x004071c8((void*)0x43a620, 0, (void*)0xf66a88);
    }
}
} }
