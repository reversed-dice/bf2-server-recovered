// FUNCTION: BF2 0x6d6430
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x6d6420(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_6d6430(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x10a339c);
    fn_0x004071c8((void*)0x6d6420, 0, (void*)0xf66a88);
    }
}
} }
