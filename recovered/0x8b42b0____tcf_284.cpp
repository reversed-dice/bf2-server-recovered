// FUNCTION: BF2 0x8b42b0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b42b0() {
    void* g = (void*)0x10df660;
    *(void**)0x010df660 = (void*)0xbedcf0;
    fn_0x00756000(g);
}
} }
