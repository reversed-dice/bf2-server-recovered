// FUNCTION: BF2 0x8b19d0
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_8b19d0() {
    void* p = *(void**)0x010efce0;
    if (p) fn_del_0x004085b8(p);
}
} }
