// FUNCTION: BF2 0x6a6680
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x6a6670(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_6a6680(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x1092d5c);
    fn_0x004071c8((void*)0x6a6670, 0, (void*)0xf66a88);
    }
}
} }
