// FUNCTION: BF2 0x424f80
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x424f70(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_424f80(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x108a7b8);
    fn_0x004071c8((void*)0x424f70, 0, (void*)0xf66a88);
    }
}
} }
