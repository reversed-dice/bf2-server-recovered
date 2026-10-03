// FUNCTION: BF2 0x8bc840
namespace dice { namespace hfe { namespace world {
extern void* fn_407628(void* a, void* b);
void* operator_0x8bc840(void* out, int kind) {
    if (kind == 1)
        fn_407628(out, (void*)0xc1213a);
    else if (kind == 2)
        fn_407628(out, (void*)0xc12142);
    else if (kind == 0)
        fn_407628(out, (void*)0xc12132);
    return out;
}
} } }
