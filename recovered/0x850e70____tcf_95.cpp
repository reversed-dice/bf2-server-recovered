// FUNCTION: BF2 0x850e70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850e70() {
    void* g = (void*)0x10b5b60;
    *(void**)0x010b5b60 = (void*)0xbbe170;
    fn_0x00756000(g);
}
} }
