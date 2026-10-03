// FUNCTION: BF2 0x8b4330
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4330() {
    void* g = (void*)0x10df1e0;
    *(void**)0x010df1e0 = (void*)0xbee370;
    fn_0x00756000(g);
}
} }
