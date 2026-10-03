// FUNCTION: BF2 0x850c50
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850c50() {
    void* g = (void*)0x10b6fa0;
    *(void**)0x010b6fa0 = (void*)0xbbc430;
    fn_0x00756000(g);
}
} }
