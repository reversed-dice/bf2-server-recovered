// FUNCTION: BF2 0x5ed250
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_5ed250() {
    void* p = *(void**)0x01090460;
    if (p) fn_del_0x004085b8(p);
}
} }
