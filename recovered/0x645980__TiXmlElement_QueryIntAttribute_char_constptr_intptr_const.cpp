// FUNCTION: BF2 0x645980
namespace dice { namespace hfe {
extern void* fn_645850(void* a, void* b);
extern int fn_644c20(void* a, void* b);
int QueryIntAttribute_0x645980(void* self, void* arg2, int* out) {
    void* p = fn_645850((char*)self + 0x58, arg2);
    if (p)
        return fn_644c20(p, out);
    return 1;
}
} }
