// FUNCTION: BF2 0x6459e0
namespace dice { namespace hfe {
extern void* fn_6459b0(void* a, const char* b);
extern double fn_408058(const char* a, char** b, int c);

long Attribute_0x6459e0(void* self, const char* name, double* out) {
    void* v = fn_6459b0(self, name);
    if (out) {
        if (v)
            *out = fn_408058((const char*)v, 0, 0);
        else
            *out = 0;
    }
    return (long)v;
}
} }
