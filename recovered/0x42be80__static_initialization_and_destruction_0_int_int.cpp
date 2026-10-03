// FUNCTION: BF2 0x42be80
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x42be70(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_42be80(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108acc8);
    fn_0x004071c8((void*)0x42be70, 0, (void*)0xf66a88);
    }
}
} }
