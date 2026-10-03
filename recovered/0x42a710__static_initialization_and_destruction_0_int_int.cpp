// FUNCTION: BF2 0x42a710
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x42a700(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_42a710(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108abc0);
    fn_0x004071c8((void*)0x42a700, 0, (void*)0xf66a88);
    }
}
} }
