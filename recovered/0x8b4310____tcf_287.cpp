// FUNCTION: BF2 0x8b4310
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4310() {
    void* g = (void*)0x10df300;
    *(void**)0x010df300 = (void*)0xbee1d0;
    fn_0x00756000(g);
}
} }
