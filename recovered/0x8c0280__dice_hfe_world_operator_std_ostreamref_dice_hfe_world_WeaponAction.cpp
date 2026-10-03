// FUNCTION: BF2 0x8c0280
namespace dice { namespace hfe { namespace world {
extern void* fn_407628(void* a, void* b);
void* operator_0x8c0280(void* out, int kind) {
    if (kind == 1)
        fn_407628(out, (void*)0xc124e1);
    else if (kind == 2)
        fn_407628(out, (void*)0xc124e8);
    else if (kind == 0)
        fn_407628(out, (void*)0xc124da);
    return out;
}
} } }
