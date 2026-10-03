// FUNCTION: BF2 0x6e0dd0
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_6e0dd0() {
    void* p = *(void**)0x010a38d0;
    if (p) fn_del_0x004085b8(p);
}
} }
