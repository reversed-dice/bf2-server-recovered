// FUNCTION: BF2 0x8b1fd0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1fd0() {
    void* g = (void*)0x10ec280;
    *(void**)0x010ec280 = (void*)0xbdb6d0;
    fn_0x00756000(g);
}
} }
