// FUNCTION: BF2 0x4ff4a0
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x4fe870(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
extern void ctor_0x004ff450(void* obj);
extern void dtor_0x4ff770(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_4ff4a0(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108dd48);
    fn_0x004071c8((void*)0x4fe870, 0, (void*)0xf66a88);
    ctor_0x004ff450((void*)0x108dd30);
    fn_0x004071c8((void*)0x4ff770, 0, (void*)0xf66a88);
    }
}
} }
