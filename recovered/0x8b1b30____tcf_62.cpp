// FUNCTION: BF2 0x8b1b30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b1b30() {
    void* g = (void*)0x10ef0a0;
    *(void**)0x010ef0a0 = (void*)0xbd7430;
    fn_0x00756000(g);
}
} }
