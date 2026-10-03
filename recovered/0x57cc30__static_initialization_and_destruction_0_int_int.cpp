// FUNCTION: BF2 0x57cc30
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x57cc20(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_57cc30(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108f790);
    fn_0x004071c8((void*)0x57cc20, 0, (void*)0xf66a88);
    }
}
} }
