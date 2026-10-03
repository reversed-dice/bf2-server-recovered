// FUNCTION: BF2 0x8b5130
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5130() {
    void* g = (void*)0x10d6f60;
    *(void**)0x010d6f60 = (void*)0xbf9ff0;
    fn_0x00756000(g);
}
} }
