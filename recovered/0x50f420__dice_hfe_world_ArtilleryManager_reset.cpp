// FUNCTION: BF2 0x50f420
namespace dice { namespace hfe { namespace world {
extern void fn_56a860();
extern void fn_56a890(void* a);
extern void* g_10b8c08;
void reset_0x50f420(void* self) {
    if (__builtin_expect(g_10b8c08 != 0, 1)) {
        fn_56a860();
        fn_56a890(self);
    }
}
} } }
