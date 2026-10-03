// FUNCTION: BF2 0x40baa0
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x40ba90(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_40baa0(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x1089d84);
    fn_0x004071c8((void*)0x40ba90, 0, (void*)0xf66a88);
    }
}
} }
