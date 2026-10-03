// FUNCTION: BF2 0x8be2f0
namespace dice { namespace hfe { namespace world {
extern void* fn_407628(void* a, void* b);
void* operator_0x8be2f0(void* out, int kind) {
    if (kind == 1)
        fn_407628(out, (void*)0xc123b8);
    else if (kind == 2)
        fn_407628(out, (void*)0xc123c3);
    else if (kind == 0)
        fn_407628(out, (void*)0xc123a2);
    return out;
}
} } }
