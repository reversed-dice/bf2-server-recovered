// FUNCTION: BF2 0x714690
namespace dice { namespace hfe { namespace world {
extern void* fn_713fb0(void* a);
extern void fn_7143e0(void* a, void* b, void* c, float d);
void rotateObjectInFocusAroundVector_0x714690(void* self, void* arg2, float arg3) {
    void* p = fn_713fb0(self);
    if (p) {
        fn_7143e0(self, p, arg2, arg3);
    }
}
} } }
