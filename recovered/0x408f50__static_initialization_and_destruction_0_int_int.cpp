// FUNCTION: BF2 0x408f50
namespace dice { namespace hfe {
extern void ctor_0x0074af30(void* obj);
extern void dtor_0x408f40(void);
extern void fn_0x004071c8(void* f, void* arg, void* dso);
void static_init_408f50(int prio, int flag) {
    if (prio != 1) return;
    if (flag == 0xffff) {
    ctor_0x0074af30((void*)0xf6d638);
    fn_0x004071c8((void*)0x408f40, 0, (void*)0xf66a88);
    }
}
} }
