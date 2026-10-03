// FUNCTION: BF2 0x8b34d0
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b34d0() {
    void* g = (void*)0x10e7700;
    *(void**)0x010e7700 = (void*)0xbe23b0;
    fn_0x00756000(g);
}
} }
