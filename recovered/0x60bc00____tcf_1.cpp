// FUNCTION: BF2 0x60bc00
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_60bc00() {
    void* p = *(void**)0x010919a0;
    if (p) fn_del_0x004085b8(p);
}
} }
