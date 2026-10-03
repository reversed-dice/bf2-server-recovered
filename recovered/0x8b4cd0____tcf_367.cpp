// FUNCTION: BF2 0x8b4cd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4cd0() {
    void* g = (void*)0x10d9900;
    *(void**)0x010d9900 = (void*)0xbf63d0;
    fn_0x00756000(g);
}
} }
