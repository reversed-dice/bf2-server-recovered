// FUNCTION: BF2 0x7142a0
namespace dice { namespace hfe { namespace world {
extern void* fn_713fb0();
extern void fn_69a020(void* a, int b, int c);
extern void fn_4eea40(void* a, float b);
void updateFlagsOfObjectInFocus_0x7142a0(void* self, int arg2, int arg3) {
    void* p = fn_713fb0();
    if (p) {
        fn_69a020(p, arg2, arg3);
    } else {
        fn_4eea40((void*)0xb975aa, *(float*)0xb26c3c);
    }
}
} } }
