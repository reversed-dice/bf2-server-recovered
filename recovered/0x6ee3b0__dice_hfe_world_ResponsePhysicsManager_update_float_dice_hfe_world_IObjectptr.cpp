// FUNCTION: BF2 0x6ee3b0
namespace dice { namespace hfe { namespace world {
extern void fn_6ed740(void* a, void* b, float c);
extern void fn_6edb00(void* a, float b);
void fn_0x6ee3b0(void* self, void* obj, float f) {
    if (obj)
        fn_6ed740(self, obj, f);
    else
        fn_6edb00(self, f);
}
} } }
