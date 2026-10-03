// FUNCTION: BF2 0x5badc0
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x5badb0(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_5badc0(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108fd30);
    fn_0x004071c8((void*)0x5badb0, 0, (void*)0xf66a88);
    }
}
} }
