// FUNCTION: BF2 0xa5a440
namespace dice { namespace hfe { namespace world {
extern void* fn_407628(void* a, void* b);
void* operator_0xa5a440(void* out, int kind) {
    if (kind == 5)
        fn_407628(out, (void*)0xc12321);
    else if (kind == 6)
        fn_407628(out, (void*)0xc130d9);
    else if (kind == 4)
        fn_407628(out, (void*)0xca1c1e);
    return out;
}
} } }
