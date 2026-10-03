// FUNCTION: BF2 0x850ed0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850ed0() {
    void* g = (void*)0x10b5800;
    *(void**)0x010b5800 = (void*)0xbbe650;
    fn_0x00756000(g);
}
} }
