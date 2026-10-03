// FUNCTION: BF2 0x433c50
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x433c40(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_433c50(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108b388);
    fn_0x004071c8((void*)0x433c40, 0, (void*)0xf66a88);
    }
}
} }
