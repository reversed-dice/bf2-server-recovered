// FUNCTION: BF2 0x850a30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850a30() {
    void* g = (void*)0x10b7f60;
    *(void**)0x010b7f60 = (void*)0xbbad70;
    fn_0x00756000(g);
}
} }
