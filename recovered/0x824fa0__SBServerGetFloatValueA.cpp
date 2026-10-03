// FUNCTION: BF2 0x824fa0
namespace dice { namespace hfe {
extern char* fn_824e70(void* a, void* b, int c, double d);
extern double fn_408058(char* a, int b, int c);
double SBServerGetFloatValueA_0x824fa0(void* self, void* arg2, double arg3) {
    char* p = fn_824e70(self, arg2, 0, arg3);
    if (p)
        return fn_408058(p, 0, 0);
    return arg3;
}
} }
