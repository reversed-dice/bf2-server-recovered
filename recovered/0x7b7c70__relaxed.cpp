// FUNCTION: BF2 0x7b7c70
namespace dice { namespace hfe {
extern void ctor_0x00407338(void* obj);
extern void dtor_0x7b7c60(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_408f50(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x00407338((void*)0x10aeb0c);
    fn_0x004071c8((void*)0x7b7c60, 0, (void*)0xf66a88);
    }
}
} }
