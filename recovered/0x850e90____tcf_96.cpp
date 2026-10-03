// FUNCTION: BF2 0x850e90
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850e90() {
    void* g = (void*)0x10b5a40;
    *(void**)0x010b5a40 = (void*)0xbbe310;
    fn_0x00756000(g);
}
} }
