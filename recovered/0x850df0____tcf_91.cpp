// FUNCTION: BF2 0x850df0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850df0() {
    void* g = (void*)0x10b5fe0;
    *(void**)0x010b5fe0 = (void*)0xbbdaf0;
    fn_0x00756000(g);
}
} }
