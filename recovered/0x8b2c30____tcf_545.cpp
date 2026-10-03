// FUNCTION: BF2 0x8b2c30
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_8b2c30() {
    void* g = (void*)0x10cd0c0;
    *(void**)0x010cd0c0 = (void*)0xc08510;
    fn_0x00756000(g);
}
} }
