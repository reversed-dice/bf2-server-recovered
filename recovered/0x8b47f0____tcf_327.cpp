// FUNCTION: BF2 0x8b47f0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b47f0() {
    void* g = (void*)0x10dc600;
    *(void**)0x010dc600 = (void*)0xbf22d0;
    fn_0x00756000(g);
}
} }
