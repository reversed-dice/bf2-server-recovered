// FUNCTION: BF2 0x8c0bc0
namespace dice { namespace hfe { namespace world {
extern void* fn_407628(void* a, void* b);
void* operator_0x8c0bc0(void* out, int kind) {
    if (kind == 0)
        fn_407628(out, (void*)0xc1250f);
    else if (kind == 1)
        fn_407628(out, (void*)0xc12516);
    return out;
}
} } }
