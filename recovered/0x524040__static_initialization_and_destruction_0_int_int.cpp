// FUNCTION: BF2 0x524040
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x524030(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_524040(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108e268);
    fn_0x004071c8((void*)0x524030, 0, (void*)0xf66a88);
    }
}
} }
