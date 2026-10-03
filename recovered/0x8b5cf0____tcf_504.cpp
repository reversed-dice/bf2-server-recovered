// FUNCTION: BF2 0x8b5cf0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5cf0() {
    void* g = (void*)0x10cfee0;
    *(void**)0x010cfee0 = (void*)0xc04270;
    fn_0x00756000(g);
}
} }
