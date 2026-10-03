// FUNCTION: BF2 0x8b2830
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2830() {
    void* g = (void*)0x10c8d40;
    *(void**)0x010c8d40 = (void*)0xc0e690;
    fn_0x00756000(g);
}
} }
