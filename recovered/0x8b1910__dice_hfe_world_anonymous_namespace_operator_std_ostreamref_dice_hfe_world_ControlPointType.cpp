// FUNCTION: BF2 0x8b1910
namespace dice { namespace hfe { namespace world {
extern void* fn_407628(void* a, void* b);
void* operator_0x8b1910(void* out, int kind) {
    if (kind == 4)
        fn_407628(out, (void*)0xc11e9d);
    else if (kind == 0x10)
        fn_407628(out, (void*)0xc11ead);
    else if (kind == 2)
        fn_407628(out, (void*)0xc11e90);
    return out;
}
} } }
