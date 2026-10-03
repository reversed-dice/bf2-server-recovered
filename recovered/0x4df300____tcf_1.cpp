// FUNCTION: BF2 0x4df300
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_4df300() {
    void* p = *(void**)0x0108da20;
    if (p) fn_del_0x004085b8(p);
}
} }
