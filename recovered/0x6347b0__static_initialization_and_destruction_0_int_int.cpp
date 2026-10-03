// FUNCTION: BF2 0x6347b0
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x6347a0(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_6347b0(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x10928c0);
    fn_0x004071c8((void*)0x6347a0, 0, (void*)0xf66a88);
    }
}
} }
