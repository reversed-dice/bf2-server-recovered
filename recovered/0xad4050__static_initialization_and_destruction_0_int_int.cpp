// FUNCTION: BF2 0xad4050
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0xad4040(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_ad4050(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x1139680);
    fn_0x004071c8((void*)0xad4040, 0, (void*)0xf66a88);
    }
}
} }
