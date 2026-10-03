// FUNCTION: BF2 0x8b3950
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3950() {
    void* g = (void*)0x10e4e80;
    *(void**)0x010e4e80 = (void*)0xbe5e30;
    fn_0x00756000(g);
}
} }
