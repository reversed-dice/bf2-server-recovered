// FUNCTION: BF2 0x799920
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x799910(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_799920(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x10adf7c);
    fn_0x004071c8((void*)0x799910, 0, (void*)0xf66a88);
    }
}
} }
