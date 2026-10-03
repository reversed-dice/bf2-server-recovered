// FUNCTION: BF2 0x6f8ac0
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_6f8ac0() {
    void* p = *(void**)0x010a4250;
    if (p) fn_del_0x004085b8(p);
}
} }
