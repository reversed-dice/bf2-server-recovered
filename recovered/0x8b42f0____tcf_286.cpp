// FUNCTION: BF2 0x8b42f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b42f0() {
    void* g = (void*)0x10df420;
    *(void**)0x010df420 = (void*)0xbee030;
    fn_0x00756000(g);
}
} }
