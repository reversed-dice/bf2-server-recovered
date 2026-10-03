// FUNCTION: BF2 0x8b53b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b53b0() {
    void* g = (void*)0x10d5580;
    *(void**)0x010d5580 = (void*)0xbfc550;
    fn_0x00756000(g);
}
} }
