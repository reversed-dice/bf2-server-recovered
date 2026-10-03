// FUNCTION: BF2 0x8b4530
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4530() {
    void* g = (void*)0x10ddec0;
    *(void**)0x010ddec0 = (void*)0xbeff10;
    fn_0x00756000(g);
}
} }
