// FUNCTION: BF2 0x850c10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850c10() {
    void* g = (void*)0x10b4840;
    *(void**)0x010b4840 = (void*)0xbbfd10;
    fn_0x00756000(g);
}
} }
