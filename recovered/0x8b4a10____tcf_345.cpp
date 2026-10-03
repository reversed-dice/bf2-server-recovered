// FUNCTION: BF2 0x8b4a10
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4a10() {
    void* g = (void*)0x10db1c0;
    *(void**)0x010db1c0 = (void*)0xbf4010;
    fn_0x00756000(g);
}
} }
