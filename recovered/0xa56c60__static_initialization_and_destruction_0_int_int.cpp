// FUNCTION: BF2 0xa56c60
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0xa56c50(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_a56c60(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x111fef8);
    fn_0x004071c8((void*)0xa56c50, 0, (void*)0xf66a88);
    }
}
} }
