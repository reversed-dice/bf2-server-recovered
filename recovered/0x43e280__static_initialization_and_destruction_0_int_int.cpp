// FUNCTION: BF2 0x43e280
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x43e270(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_43e280(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108b4d0);
    fn_0x004071c8((void*)0x43e270, 0, (void*)0xf66a88);
    }
}
} }
