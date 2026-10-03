// FUNCTION: BF2 0x8b3250
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b3250() {
    void* g = (void*)0x10e8fc0;
    *(void**)0x010e8fc0 = (void*)0xbdfff0;
    fn_0x00756000(g);
}
} }
