// FUNCTION: BF2 0x997db0
namespace dice { namespace hfe {
extern void* fn_407998(void* a, double b);
extern void fn_408108(void* a, int b);
void* operator_0x997db0(void* arg1, float* arg2) {
    void* a = fn_407998(arg1, (double)arg2[0]);
    fn_408108(a, 0x2f);
    void* b = fn_407998(arg1, (double)arg2[1]);
    fn_408108(b, 0x2f);
    return fn_407998(arg1, (double)arg2[2]);
}
} }
