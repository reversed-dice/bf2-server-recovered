// FUNCTION: BF2 0x48ecf0
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_48ecf0() {
    void* p = *(void**)0x0108cf50;
    if (p) fn_del_0x004085b8(p);
}
} }
