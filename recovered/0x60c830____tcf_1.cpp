// FUNCTION: BF2 0x60c830
namespace dice { namespace hfe {
extern void fn_del_0x004085b8(void* p);
void tcf_60c830() {
    void* p = *(void**)0x010919d0;
    if (p) fn_del_0x004085b8(p);
}
} }
