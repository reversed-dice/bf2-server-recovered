// FUNCTION: BF2 0x7c2aa0
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x7c2a90(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_7c2aa0(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x10aeb50);
    fn_0x004071c8((void*)0x7c2a90, 0, (void*)0xf66a88);
    }
}
} }
