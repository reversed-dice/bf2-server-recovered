// FUNCTION: BF2 0xac26f0
namespace dice { namespace hfe {
extern int fn_4071b8(void* a);
extern void fn_407b88(void* a);
extern void fn_407f38(void* a, void* b, int c);
extern void fn_69e070(void* a, void* b);
extern void fn_407b68(void* a);
void fn_ac26f0(void* self, int type, void* s, void* a) {
    if (type != 1)
        return;
    if (!*(char*)0x1139420) {
        if (fn_4071b8((void*)0x1139420)) {
            *(void**)0x1139420 = 0;
            fn_407b88((void*)0x1139420);
        }
    }
    char buf[0x170];
    fn_407f38(&buf, s, 8);
    fn_69e070(&buf, (void*)0x1139420);
    *(void**)((char*)self + 0x38) = (void*)0x1139420;
    fn_407b68(&buf);
}
} }
