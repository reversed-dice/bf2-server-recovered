// FUNCTION: BF2 0x714270
namespace dice { namespace hfe { namespace world {
extern void* fn_713fb0(void* a);
extern void fn_6dce00(void* a, int b);
extern void fn_4eea40(void* a, float b);
void setSleepinessOfObjectInFocus_0x714270(void* self, int arg2) {
    void* p = fn_713fb0(self);
    if (p)
        fn_6dce00(p, arg2);
    else
        fn_4eea40((void*)0xb975aa, *(float*)0xb26c3c);
}
} } }
