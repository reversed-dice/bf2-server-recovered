// FUNCTION: BF2 0x850e50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850e50() {
    void* g = (void*)0x10b5c80;
    *(void**)0x010b5c80 = (void*)0xbbdfd0;
    fn_0x00756000(g);
}
} }
