// FUNCTION: BF2 0x850c70
namespace dice { namespace hfe {
extern void fn_0x00756000(void* p);
void tcf_850c70() {
    void* g = (void*)0x10b6e80;
    *(void**)0x010b6e80 = (void*)0xbbc5d0;
    fn_0x00756000(g);
}
} }
