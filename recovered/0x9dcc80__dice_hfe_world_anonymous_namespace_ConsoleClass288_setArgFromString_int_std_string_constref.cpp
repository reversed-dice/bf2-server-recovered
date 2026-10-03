// FUNCTION: BF2 0x9dcc80
namespace dice { namespace hfe {
extern int fn_4071b8(void* a);
extern void fn_407b88(void* a);
extern void fn_407f38(void* a, void* b, int c);
extern void fn_748920(void* a, void* b);
extern void fn_407b68(void* a);
void fn_9dcc80(void* self, int type, void* s, void* a) {
    if (type != 1)
        return;
    if (!*(char*)0x1113fb8) {
        if (fn_4071b8((void*)0x1113fb8)) {
            *(int*)0x11145c0 = 0;
            *(int*)0x11145c4 = 0x3f800000;
            *(int*)0x11145c8 = 0;
            *(char*)0x11145cc = 0;
            *(void**)0x11145d0 = (void*)0x759dc150;
            fn_407b88((void*)0x1113fb8);
        }
    }
    char buf[0x170];
    fn_407f38(&buf, s, 8);
    fn_748920(&buf, (void*)0x11145c0);
    *(void**)((char*)self + 0x38) = (void*)0x11145c0;
    fn_407b68(&buf);
}
} }
