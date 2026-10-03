// FUNCTION: BF2 0x8bfe20
namespace dice { namespace hfe { namespace world {
extern void* fn_407628(void* a, void* b);
void* operator_0x8bfe20(void* out, int kind) {
    if (kind == 1)
        fn_407628(out, (void*)0xc124cb);
    else if (kind == 2)
        fn_407628(out, (void*)0xc124c2);
    else if (kind == 0)
        fn_407628(out, (void*)0xc124b7);
    return out;
}
} } }
