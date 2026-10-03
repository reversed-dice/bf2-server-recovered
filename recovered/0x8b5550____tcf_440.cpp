// FUNCTION: BF2 0x8b5550
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b5550() {
    void* g = (void*)0x10d46e0;
    *(void**)0x010d46e0 = (void*)0xbfda70;
    fn_0x00756000(g);
}
} }
