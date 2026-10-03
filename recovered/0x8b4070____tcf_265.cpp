// FUNCTION: BF2 0x8b4070
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4070() {
    void* g = (void*)0x10e0bc0;
    *(void**)0x010e0bc0 = (void*)0xbebe10;
    fn_0x00756000(g);
}
} }
