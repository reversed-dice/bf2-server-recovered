// FUNCTION: BF2 0x850f30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850f30() {
    void* g = (void*)0x10b54a0;
    *(void**)0x010b54a0 = (void*)0xbbeb30;
    fn_0x00756000(g);
}
} }
