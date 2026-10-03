// FUNCTION: BF2 0x8b4350
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4350() {
    void* g = (void*)0x10df0c0;
    *(void**)0x010df0c0 = (void*)0xbee510;
    fn_0x00756000(g);
}
} }
