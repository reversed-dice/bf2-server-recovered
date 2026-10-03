// FUNCTION: BF2 0x873010
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_873010() {
    void* g = (void*)0x10b90c0;
    *(void**)0x010b90c0 = (void*)0xbcc710;
    fn_0x00756000(g);
}
} }
