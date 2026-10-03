// FUNCTION: BF2 0x8b54f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b54f0() {
    void* g = (void*)0x10d4a40;
    *(void**)0x010d4a40 = (void*)0xbfd590;
    fn_0x00756000(g);
}
} }
