// FUNCTION: BF2 0x8b4010
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4010() {
    void* g = (void*)0x10e0f40;
    *(void**)0x010e0f40 = (void*)0xbeb930;
    fn_0x00756000(g);
}
} }
