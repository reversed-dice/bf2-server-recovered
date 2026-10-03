// FUNCTION: BF2 0x4263b0
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x4263a0(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_408f50(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108a8b4);
    fn_0x004071c8((void*)0x4263a0, 0, (void*)0xf66a88);
    }
}
} }
