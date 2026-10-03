// FUNCTION: BF2 0x8b4850
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b4850() {
    void* g = (void*)0x10dc180;
    *(void**)0x010dc180 = (void*)0xbf2950;
    fn_0x00756000(g);
}
} }
