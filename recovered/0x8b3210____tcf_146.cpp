// FUNCTION: BF2 0x8b3210
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3210() {
    void* g = (void*)0x10e9200;
    *(void**)0x010e9200 = (void*)0xbdfcb0;
    fn_0x00756000(g);
}
} }
