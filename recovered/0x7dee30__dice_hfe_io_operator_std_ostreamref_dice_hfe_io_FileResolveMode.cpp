// FUNCTION: BF2 0x7dee30
namespace dice { namespace hfe { namespace io {
extern void* fn_407628(void* a, void* b);
void* operator_0x7dee30(void* out, int kind) {
    if (kind == 0)
        fn_407628(out, (void*)0xbac8b0);
    else if (kind == 1)
        fn_407628(out, (void*)0xbac8b8);
    return out;
}
} } }
