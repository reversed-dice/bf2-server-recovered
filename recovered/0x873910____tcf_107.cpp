// FUNCTION: BF2 0x873910
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_873910() {
    void* g = (void*)0x10bc000;
    *(void**)0x010bc000 = (void*)0xbc82d0;
    fn_0x00756000(g);
}
} }
