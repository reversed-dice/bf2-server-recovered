// FUNCTION: BF2 0x6dce80
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_6dce80() {
    void* p = *(void**)0x010a3620;
    if (p) fn_del_0x004085b8(p);
}
} }
