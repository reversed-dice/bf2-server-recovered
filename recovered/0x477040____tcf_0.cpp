// FUNCTION: BF2 0x477040
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_477040() {
    void* p = *(void**)0x0108cc00;
    if (p) fn_del_0x004085b8(p);
}
} }
