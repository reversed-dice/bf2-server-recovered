// FUNCTION: BF2 0x645a40
namespace dice { namespace hfe {
extern void* fn_6459b0(void* a, const char* b);
extern int fn_407ed8(void* a, int b, int c, int d);
void* Attribute_0x645a40(void* self, const char* name, int* out) {
    void* v = fn_6459b0(self, name);
    if (out) {
        if (v)
            *out = fn_407ed8(v, 0, 0xa, 0);
        else
            *out = 0;
    }
    return v;
}
} }
