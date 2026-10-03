// FUNCTION: BF2 0x8b3550
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3550() {
    void* g = (void*)0x10e7280;
    *(void**)0x010e7280 = (void*)0xbe2a30;
    fn_0x00756000(g);
}
} }
