// FUNCTION: BF2 0x60f170
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_60f170() {
    void* p = *(void**)0x01091a00;
    if (p) fn_del_0x004085b8(p);
}
} }
