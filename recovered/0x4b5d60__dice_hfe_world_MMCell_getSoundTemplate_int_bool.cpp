// FUNCTION: BF2 0x4b5d60
namespace dice { namespace hfe {
extern void* fn_4b5c50(void* a, void* b, bool c);
void* f_0x4b5d60(void* a, void* b, bool c) {
    void* p = fn_4b5c50(a, b, c);
    if (!p)
        return 0;
    return *(void**)p;
}
} }
