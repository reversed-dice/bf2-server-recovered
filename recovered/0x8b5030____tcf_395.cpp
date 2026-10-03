// FUNCTION: BF2 0x8b5030
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5030() {
    void* g = (void*)0x10d7980;
    *(void**)0x010d7980 = (void*)0xbf9150;
    fn_0x00756000(g);
}
} }
