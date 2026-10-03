// FUNCTION: BF2 0x873b10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_873b10() {
    void* g = (void*)0x10babc0;
    *(void**)0x010babc0 = (void*)0xbca010;
    fn_0x00756000(g);
}
} }
