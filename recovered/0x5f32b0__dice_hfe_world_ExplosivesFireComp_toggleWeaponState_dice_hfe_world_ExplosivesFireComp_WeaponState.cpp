// FUNCTION: BF2 0x5f32b0
namespace dice { namespace hfe { namespace world {
extern "C" int fn_74aaa0(void* p);
void eom_5f32b0(char* self, int v) {
    *(int*)(self + 0x174) = v;
    char* t = *(char**)(self + 0x1d8);
    int n = *(int*)(t + 0x94);
    *(int*)(self + 0x1a8) = n + fn_74aaa0(self);
}
} } }
// REVERSED_FUNCTION: test (0x5f32b0)
