// FUNCTION: BF2 0x8b5310
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5310() {
    void* g = (void*)0x10d5c40;
    *(void**)0x010d5c40 = (void*)0xbfbb90;
    fn_0x00756000(g);
}
} }
