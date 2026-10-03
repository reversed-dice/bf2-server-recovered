// FUNCTION: BF2 0x50cd30
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x50cd20(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_50cd30(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108dd85);
    fn_0x004071c8((void*)0x50cd20, 0, (void*)0xf66a88);
    }
}
} }
