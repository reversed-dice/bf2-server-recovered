// FUNCTION: BF2 0x436490
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x436480(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_436490(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108b3a8);
    fn_0x004071c8((void*)0x436480, 0, (void*)0xf66a88);
    }
}
} }
